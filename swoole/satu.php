<?php

	$http = new swoole_http_server("127.0.0.1", 9501);

	$http->on("start", function($server){
		echo "bismillah\n";
	});

	$http->on("request", function($req, $res){
		$res->header("Content-Type", "text/plain");
		$res->end("Bismillah");
	});

	$http->start();