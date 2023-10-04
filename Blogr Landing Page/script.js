$(document).ready(() => {
    const main_link = $('.main-link');
    const arrow = $('.arrow');

    /* ---------------------DESKTOP NAVBAR------------------------*/

    main_link.on('click', event => {
        const link_box = $($($(event.currentTarget).siblings()[2]).children());
        console.log(link_box);
        const arrow_img = $($(event.currentTarget).siblings()[0]);
        // console.log(link_box)
        if (link_box.hasClass('link-show')) {
            clearAll(main_link);
        } else if (!arrow_img.is('button')) {
            clearAll(main_link);
            link_box.addClass('link-show');
            arrow_img.addClass('arrow-rotate');
        }

    });

    main_link.on('mouseenter', event => {
        const link_box = $($($(event.currentTarget).siblings()[2]).children());
        const arrow_img = $($(event.currentTarget).siblings()[0]);
        if (!arrow_img.is('button')) {
            clearAll(main_link);
            link_box.addClass('link-show');
            arrow_img.addClass('arrow-rotate');
        }

    });

    /* ---------------------HAMBURGER MENU-----------------------*/
    const hamburger = $('.hamburger');
    const hamburger_open_pic = "images/icon-hamburger.svg";
    const hamburger_close_pic = "images/icon-close.svg";
    hamburger.on('click', () => {
        // Change hamburger icon

        if (hamburger.attr('src') === hamburger_open_pic) {
            hamburger.attr('src', hamburger_close_pic);
            $('.all-links').css('top', '6rem');
        } else {
            hamburger.attr('src', hamburger_open_pic);
            $('.all-links').css('top', '-60rem');
            clearAllMobile(main_link);
            // clearAll(main_link);
        }

        // Menus in hamburger box

        main_link.on('click', event => {
            const link_box = $($($(event.currentTarget).siblings()[2]).children());
            const arrow_img = $($(event.currentTarget).siblings()[1]);

            if (link_box.hasClass('link-box-show')) {
                clearAllMobile(main_link);
                // clearAll(main_link);
            } else if (!arrow_img.is('button')) {
                clearAllMobile(main_link);
                // clearAll(main_link);
                link_box.addClass('link-box-show');
                arrow_img.addClass('arrow-rotate');
            }

        });

    })

});


/* ----- CLEAR ALL POPUP MENU (DESKTOP)-----*/

function clearAll(main_link) {
    main_link.each((index, element) => {
        const link_box = $($($(element).siblings()[2]).children());
        const arrow_img = $($(element).siblings()[0]);
        link_box.removeClass('link-show');
        arrow_img.removeClass('arrow-rotate');
    });
}


/* ----- CLEAR ALL POPUP MENU (MOBILE)-----*/

function clearAllMobile(main_link) {
    main_link.each((index, element) => {
        const link_box = $($($(event.currentTarget).siblings()[2]).children());
        const arrow_img = $($(element).siblings()[1]);
        link_box.removeClass('link-box-show');
        arrow_img.removeClass('arrow-rotate');
    });
}