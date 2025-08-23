Action()
{
    lr_param_sprintf("pUser", lr_eval_string("{username}"));
    lr_param_sprintf("pPass", lr_eval_string("{password}"));

    web_url("Home",
        "URL=http://testsite.com/",
        LAST);

    web_submit_data("Login",
        "Action=http://testsite.com/login",
        "Method=POST",
        ITEMDATA,
        "Name=username", "Value={pUser}", ENDITEM,
        "Name=password", "Value={pPass}", ENDITEM,
        LAST);

    web_url("Profile",
        "URL=http://testsite.com/profile",
        LAST);

    return 0;
}
