const song = document.getElementById("song");
const playBtn =  document.querySelector(".player-inner");
playBtn.addEventListener("click", playPause);
let isPlaying = true;
function playPause(){

    if (isPlaying){
  
    song.play();
   
    playBtn.innerHTML=`<i class='bx bx-pause'></i>`
    isPlaying = false;
  }else{
  
      song.pause();
     
      playBtn.innerHTML = `<i class='bx bx-play' ></i>`;
      isPlaying = true;
    }
  
  }