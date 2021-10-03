console.log("rendered");
var participants = 
[  
   {  
      "github":"hkaur008",
      "name":"Hargun Kaur",
      "intro":"Software Extern @github | @MLH Summer and Fall Fellow'21| Microsoft Engage '21💻,MLSA @microsoft | Founder @CodeFlow201 | NIT Kurukshetra | vGHC scholar '21",
      "quote":"Do what you like! ❤"
   },
   {  
      "github":"fts18",
      "name":"Ananay",
      "intro":"Web Designer",
      "quote":"One day you will leave this world behind so live a life you will remember!"
   },
   {  
    "github":"PallaviPareek",
    "name":"Pallavi Pareek",
    "intro":"Frontend Web Developer and UI/UX Designer",
    "quote":"Leave a litte spark ✨ where ever you go"
   },
  {
    "github":"chhabraharsh37",
    "name":"Harsh Chhabra",
    "intro":"Founder at Codeflow | Google DSC Lead NIT KKR | Beta Microsoft Learn Student Ambassador | AWS Community Builder | Postman Student Leader | Azure Developer Community Organizer Chandigarh ",
    "quote":"I ❤ code"
 },
 {  
  "github":"twi05",
  "name":"Twinshu Parmar",
  "intro":"I'm First Year CSE Undergrad | Passionate about Photography, Filmmaking, Editing, Webdevelopment and coding",
  "quote":"Don't Stop Untill U R Proud"
 },
{  
  "github":"amanverma644",
  "name":"Aman Verma",
  "intro":"Web Developer & Competitive Programmer",
  "quote":"Eager to learn new things.."
 },
{
  "github":"parzival27000",
  "name":"Mayank Jha",
  "intro":"Undergrad in pursuit of my goals",
  "quote":"perseverance beats the tides of tough times ✨"
},
{  
  "github":"Github Handle",
  "name":"Name",
  "intro":"Anything you want to share !!",
  "quote":"quote ✨"
},
{  
  "github":"Github Handle",
  "name":"Name",
  "intro":"Anything you want to share !!",
  "quote":"quote ✨"
},

  
]


renderCards();
function renderCards(){
  var theDiv = document.getElementById("list");
    for(var i = 0; i < participants.length; i++){
      var content =`<div class="col">
      <div class="card border-success mb-3" style="max-width: 18rem;">
        <div class="card-header bg-transparent border-success"><a href="https://github.com/${participants[i].github}"><img src="github.png" height="32px" class="m-2"/>${participants[i].github}</a></div>
        <div class="card-body text-success">
          <h5 class="card-title">${participants[i].name}</h5>
          <p class="card-text">${participants[i].intro}</p>
        </div>
        <div class="card-footer bg-transparent border-success">${participants[i].quote}</div>
      </div>
    </div>`;
      theDiv.insertAdjacentHTML('beforeend',content);
    }
  }

  window.smoothScroll = function(target) {
    var scrollContainer = target;
    do { //find scroll container
        scrollContainer = scrollContainer.parentNode;
        if (!scrollContainer) return;
        scrollContainer.scrollTop += 1;
    } while (scrollContainer.scrollTop == 0);

    var targetY = 0;
    do { //find the top of target relatively to the container
        if (target == scrollContainer) break;
        targetY += target.offsetTop;
    } while (target = target.offsetParent);

    scroll = function(c, a, b, i) {
        i++; if (i > 30) return;
        c.scrollTop = a + (b - a) / 30 * i;
        setTimeout(function(){ scroll(c, a, b, i); }, 20);
    }
    // start scrolling
    scroll(scrollContainer, scrollContainer.scrollTop, targetY, 0);
}
