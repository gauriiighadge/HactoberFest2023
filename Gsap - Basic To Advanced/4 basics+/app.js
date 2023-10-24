var t1 = gsap.timeline()


t1.from("#nav>img,#nav #mnav , #nav #lnav",{
    y : -100 , 
    duration : 0.5,
    delay : 0.4,
    opacity : 0 ,
    stagger : 0.2

})

t1.from("#main h1",{
    y:100 ,
    opacity :0,
    stagger :0.3

})

t1.from("#img3 , #img4" , {
    scale : 0,
    opacity :0,
    stagger : 0.5,
    duration:0.5

})
t1.from("#img1,#img2" , {
    scale : 0,
    opacity :0,
    stagger : 0.5,
    duration:0.5

})
t1.from("#bottom-img, #mbottom" , {
    scale : 0,
    opacity :0,
    stagger : 0.5,
    duration:0.5

})

t1.to("#bottom>p",
{
    repeat:-1,
    yoyo:true,
    y : -30

})