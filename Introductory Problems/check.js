<script>
(function() {
  /*Adjust these Variables*/
   let playInBackend = true,
        timing = 3,
        section = '',
        direction = 1;

    /*Do not Adjust below this line*/
  function AutoScrollLayout(el) {
      if (el == '') {
        el = document.querySelector('.user-items-list-section');
      } else {
        el = document.querySelector(el)
      };
      let isPaused = false,
          timer,
          interval,
          stopEvents = ['mousedown', 'touchstart', 'mouseover'],
          restartEvents = ['mouseup', 'touchend' , 'mouseleave'],
          editMode,
          popupMode,
          visible,
          btns = el.querySelectorAll('button[class*="__arrow-button"]');

      interval = timing * 1000;

      function setTimer() {
          timer = setInterval(checkSlide, interval);
      };

      function checkSlide() {
        editMode = document.querySelector('body.sqs-edit-mode-active');
        popupMode = document.querySelector('.sqs-modal-lightbox-open');
        if (!isPaused && !editMode && !popupMode && visible){
          slideRight();
        }
      }

      let resetTimer = () => {
        clearInterval(timer);
        setTimer();
      }

      document.addEventListener('visibilitychange', function() {
        if(document.hidden) { isPaused = true; }
        else { isPaused = false; }
      });

      stopEvents.forEach(event => {
        el.addEventListener(event, function() {
          isPaused = true;
        });
      });

      restartEvents.forEach(event => {
        el.addEventListener(event, function() {
          isPaused = false;
          resetTimer();
        });
      });

      if(!!window.IntersectionObserver){
        let observer = new IntersectionObserver((entries, observer) => {
          entries.forEach(entry => {
            if(entry.isIntersecting){
              visible = true;
            } else {
              visible = false;
            }
          });
        }, {rootMargin: "-75px 0px -75px 0px"});
        observer.observe(el)
      }

      function slideRight() {
        btns[direction].click();
      }

      if (btns[direction]){
        setTimer();
      }
    }

    window.addEventListener('load', function(){
      let els = new Array;
      els.push(section);
      if (section.includes(',')) els = section.split(',');
      els.forEach(el => {
        if (window.top == window.self || ( window.top !== window.self && playInBackend)){
          new AutoScrollLayout(el);
        }
      });
    });
  }());
</script>


// Custom CSS for smooth transition
// Autoplay reel //

.gallery-reel-wrapper   {overflow: hidden; /*height: 510px; width: 728px; margin: 0 auto;*/ }

.gallery-reel-list      {width: 2912px; animation-name: behindscenes; animation-duration: 30s; animation-timing-function: linear; animation-iteration-count: infinite; animation-direction: alternate; 

	animation-play-state: running;}

.gallery-reel-list:hover {animation-play-state: running;}

@keyframes behindscenes {0% {margin-left: 0px;}

  50% {margin-left: -50%;}

  100% {margin-left: -100%;}  

}

// Autoplay function //

.target   {overflow: hidden; /*height: 510px; width: 728px; margin: 0 auto;*/ }

.target     {width: 2912px; animation-name: behindscenes; animation-duration: 30s; animation-timing-function: linear; animation-iteration-count: infinite; animation-direction: alternate; 

	animation-play-state: running;}

.target:hover {animation-play-state: running;}

@keyframes behindscenes {0% {margin-left: 0px;}

  50% {margin-left: -50%;}

  100% {margin-left: -100%;}  

}


// Gallary Edit

<script>
    /**
    *  Gallery Section Auto Scroller
    **/
  (function () {
    setAutoScroll({
      gallery: 1,
      direction: 2,
      timing: 3000,
    });

    /*
    * Copy and paste the above code
    * to target more auto-scrolling
    * sections
    **/

    /** gallery
    * gallery section order on the page. Ex:
    * 1 = the first gallery section on a page,
    * 2 = the second gallery section on a page
    **/

    /** direction
    * direction the gallery should go in.
    * 1 = backwards,
    * 2 = forwards
    **/

    /** timing
    * timing between each slide, in milliseconds. Ex:
    * 2000 = 2 seconds
    **/

    function setAutoScroll(settings) {
      function init() {
        let section = document.querySelectorAll("gallery-reel-list gallery-reel-list ")[settings.gallery - 1];

        function clickArrow() {
          if (section && !document.querySelector("html.sqs-modal-lightbox-open") && !document.hidden && !document.querySelector("body.sqs-edit-mode")) {
            let arrow = section.querySelectorAll(".gallery-reel-control .gallery-reel-control-btn")[settings.direction - 1];
            if (arrow) arrow.click();
          }
        }

        window.setInterval(clickArrow, settings.timing);
      }

      window.addEventListener("DOMContentLoaded", init);
    }
  })();


</script>


<style>
.gallery-reel {
  height: clamp(75px, 25vw, 200px) !important;
  padding: 17px 0px !important;
}
</style>

<style>
  .gallery-reel-item-wrapper {
    padding-left: 4vw;
    padding-right: 4vw;
  }

</style>









// Working code

<script>
(function() {

   let playInBackend = true,
        timing = 3,
        section = '',
        direction = 1;


  function AutoScrollLayout(el) {
      if (el == '') {
        el = document.querySelector('.page-section.gallery-section');
      } else {
        el = document.querySelector(el)
      };
      let isPaused = false,
          timer,
          interval,
          stopEvents = ['mousedown', 'touchstart', 'mouseover'],
          restartEvents = ['mouseup', 'touchend' , 'mouseleave'],
          editMode,
          popupMode,
          visible,
          btns = el.querySelectorAll('.gallery-reel-control .gallery-reel-control-btn');

      interval = timing * 1000;

      function setTimer() {
          timer = setInterval(checkSlide, interval);
      };

      function checkSlide() {
        editMode = document.querySelector('body.sqs-edit-mode-active');
        popupMode = document.querySelector('.sqs-modal-lightbox-open');
        if (!isPaused && !editMode && !popupMode && visible){
          slideRight();
        }
      }

      let resetTimer = () => {
        clearInterval(timer);
        setTimer();
      }

      document.addEventListener('visibilitychange', function() {
        if(document.hidden) { isPaused = true; }
        else { isPaused = false; }
      });

      stopEvents.forEach(event => {
        el.addEventListener(event, function() {
          isPaused = true;
        });
      });

      restartEvents.forEach(event => {
        el.addEventListener(event, function() {
          isPaused = false;
          resetTimer();
        });
      });

      if(!!window.IntersectionObserver){
        let observer = new IntersectionObserver((entries, observer) => {
          entries.forEach(entry => {
            if(entry.isIntersecting){
              visible = true;
            } else {
              visible = false;
            }
          });
        }, {rootMargin: "-75px 0px -75px 0px"});
        observer.observe(el)
      }

      function slideRight() {
        btns[direction].click();
      }

      if (btns[direction]){
        setTimer();
      }
    }
// This code is listening an windows event when web page loads it takes the gallery section and loops through its slides by invoking the function for Auto Scroll functionality.
    window.addEventListener('load', function(){
      let els = new Array;
      els.push(section);
      if (section.includes(',')) els = section.split(',');
      els.forEach(el => {
        if (window.top == window.self || ( window.top !== window.self && playInBackend)){
          new AutoScrollLayout(el);
        }
      });
    });
  }());
</script>











element.style {
  grid-gap: 20px;
}
@media screen and (min-width: 576px)
.user-items-list-carousel[data-max-columns="2"] .user-items-list-carousel__slides, .user-items-list-carousel[data-max-columns="3"] .user-items-list-carousel__slides, .user-items-list-carousel[data-max-columns="4"] .user-items-list-carousel__slides, .user-items-list-carousel[data-max-columns="5"] .user-items-list-carousel__slides, .user-items-list-carousel[data-max-columns="6"] .user-items-list-carousel__slides, .user-items-list-carousel[data-max-columns="2"] .user-items-list-carousel__arrow-wrapper, .user-items-list-carousel[data-max-columns="3"] .user-items-list-carousel__arrow-wrapper, .user-items-list-carousel[data-max-columns="4"] .user-items-list-carousel__arrow-wrapper, .user-items-list-carousel[data-max-columns="5"] .user-items-list-carousel__arrow-wrapper, .user-items-list-carousel[data-max-columns="6"] .user-items-list-carousel__arrow-wrapper {
  -ms-grid-columns: (1fr)[2];
  grid-template-columns: repeat(2,1fr);
}
.user-items-list-carousel[data-max-columns="1"] .user-items-list-carousel__slides, .user-items-list-carousel[data-max-columns="2"] .user-items-list-carousel__slides, .user-items-list-carousel[data-max-columns="3"] .user-items-list-carousel__slides, .user-items-list-carousel[data-max-columns="4"] .user-items-list-carousel__slides, .user-items-list-carousel[data-max-columns="5"] .user-items-list-carousel__slides, .user-items-list-carousel[data-max-columns="6"] .user-items-list-carousel__slides, .user-items-list-carousel[data-max-columns="1"] .user-items-list-carousel__arrow-wrapper, .user-items-list-carousel[data-max-columns="2"] .user-items-list-carousel__arrow-wrapper, .user-items-list-carousel[data-max-columns="3"] .user-items-list-carousel__arrow-wrapper, .user-items-list-carousel[data-max-columns="4"] .user-items-list-carousel__arrow-wrapper, .user-items-list-carousel[data-max-columns="5"] .user-items-list-carousel__arrow-wrapper, .user-items-list-carousel[data-max-columns="6"] .user-items-list-carousel__arrow-wrapper {
  -ms-grid-columns: (1fr)[1];
  grid-template-columns: repeat(1,1fr);
}
@media screen and (min-width: 576px)
.user-items-list-carousel[data-show-adjacent-slides="true"] .user-items-list-carousel__slides, .user-items-list-carousel[data-show-adjacent-slides="true"] .user-items-list-carousel__arrow-wrapper--left {
  padding-right: 40px;
}
.user-items-list-carousel__slides--initialized {
  opacity: 1;
}
.user-items-list-carousel__slides {
  margin: 0px;
  padding: 0px;
  width: 100%;
  box-sizing: border-box;
  display: -ms-grid;
  display: grid;
  -ms-grid-rows: 1fr;
  grid-template-rows: 1fr;
  -ms-grid-columns: 1fr;
  grid-template-columns: 1fr;
  list-style-type: none;
  opacity: 0;
  transition: opacity .3s;