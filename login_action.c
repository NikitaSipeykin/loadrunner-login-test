Action()
{
    char url[1024];
    int limit = atoi(lr_eval_string("{limit}"));
    if (limit <= 0) return 0;

    sprintf(url,
        "https://%s%s?guest_id=%s&guest_id_type=%s&business_unit=%s&model_type=%s&limit=%d",
        lr_eval_string("{BASE_URL}"),
        lr_eval_string("{path}"),
        lr_eval_string("{guest_id}"),
        lr_eval_string("{guest_id_type}"),
        lr_eval_string("{business_unit}"),
        lr_eval_string("{model_type}"),
        limit
    );

    web_url("UC01_FindMax",
        "URL={url}",
        "Resource=0",
        LAST);

    lr_think_time(1);
    return 0;
}