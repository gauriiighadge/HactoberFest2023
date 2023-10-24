gsap.from("#page1 #box",{
    scale:0,
    rotate : 360,
    duration : 1,
    delay : 0.5,

})
gsap.from("#page2 #box",{
    scale:0,
    rotate : 360,
    duration : 1,
    delay : 0.5,
    scrollTrigger : "#page2 #box"

})