var plotly = require('plotly')("viniciusdutra", "yRRS7LXarfVbhC05FCCu")

var data = [{x:[0,1,2,3 ], y:[3,2,1], type: 'Scatter plot' }];
var layout = {fileopt : "overwrite", filename : "simple-node-example"};
plotly.plot(data, layout, function (err, msg) {
	if (err) return console.log(err);
	console.log(msg);
});