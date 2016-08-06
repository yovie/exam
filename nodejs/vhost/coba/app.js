const express = require('express');
var app = express();

app.get('/', function(req, res, next){
	res.send('bismillah, coba application');
});

exports.app = app;