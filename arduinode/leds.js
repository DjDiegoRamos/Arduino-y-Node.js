var jf = require("johnny-five");
var circuito = new jf.Board();

circuito.on("ready", prender);

function prender()
{
    var rojito = new jf.Led(9);
    var verdecito = new jf.Led(13);
    rojito.blink(700);
    verdecito.blink(200);
    console.log("Hola mama se hacer hardware");
}
