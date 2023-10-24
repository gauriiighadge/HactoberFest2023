gsap.to("h1",{
    x : 200,
    color: "orange",
    duration :2,
    delay :1,
    repeat :1

})
gsap.to("h2",{
    x : 150,
    color: "white",
    duration :2,
    delay :2,
    repeat : 2

})
gsap.to("h3",{
    x : 100,
    color: "green",
    duration :2,
    delay :3,
    repeat : -1

})

gsap.to("h4",{
    x : 100,
    color: "blue",
    duration :2,
    delay :3,
    stagger :1,
    repeat:-1,
    yoyo : true

})