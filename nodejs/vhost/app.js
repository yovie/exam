const express = require('express');
var vhost = require('vhost');

var app = express();

app.use(vhost('localhost.lo', require('./coba/app.js').app));

app.listen(8888, function(){
	console.log('application started at port 8888');
});