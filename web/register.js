
/**@type {string[]} */
let filenames = ["X3.jpg"]

debugger

console.log(filenames)

//window.onload = function () {

// "Server response", used in all examples
let response = "self.onmessage=function(e){postMessage('Worker: '+e.data);}";

let blob;

blob = new Blob([response], { type: 'application/javascript' });

var worker = new Worker(URL.createObjectURL(blob));

// Test, used in all examples:
worker.onmessage = function (e) {
    alert('Response: ' + e.data);
};

window.chrome.webview.addEventListener('message',
    event => worker.postMessage(event.data), true)
console.log("test1")

window.chrome.webview.postMessage(filenames[0])

console.log("test")
//}