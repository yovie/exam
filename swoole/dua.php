<?php
// $workers = [];
// $worker_num = 3;

// for($i=0;$i<$worker_num ; $i++){

//     $process = new swoole_process('process');
//     $pid = $process->start();
//     $workers[$pid] = $process;

//     echo "create a child process\n";
// }

// foreach($workers as $process)
// {
//     swoole_event_add($process->pipe, function ($pipe) use($process){
//         $data = $process->read();
//         echo "RECV: " . $data . "\n";
//     });
// }

function process(swoole_process $process){
    sleep(rand(5, 10)); 
    $process->write($process->pid);
    echo "dari proses " . $process->pid . "\n";
}

$process = new swoole_process('process');

// swoole_event_add($process->pipe, function ($pipe) use($process){
//     $data = $process->read();
//     echo "RECV: " . $data . "\n";
// });

// $process->start();

$http = new swoole_http_server("127.0.0.1", 9501);

$http->addProcess($process);

$http->on('request', function ($request, $response) use($process) {
    $response->end("<h1>Hello World. #".$process->read()."</h1>");
});

$http->start();