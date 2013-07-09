if(typeof(CKEDITOR) !== 'undefined') {
  (function($){
    CKEDITOR.config.templates = CKEDITOR.config.templates || "";

    var existing_templates = CKEDITOR.config.templates.length ? CKEDITOR.config.templates.split(",") : [];
    existing_templates.push("wl_editing_framework");

    // Get rid of the default templates, if necessary
    var default_template_index = $.inArray("default", existing_templates);
    if(default_template_index !== -1) {
      existing_templates.splice(default_template_index, 1);
    }

    CKEDITOR.config.templates = existing_templates.join(",");
  })(jQuery);

  CKEDITOR.addTemplates("wl_editing_framework", {
    imagesPath: Drupal.settings.basePath + Drupal.settings.wl_ckeditor_plugins.base_path + "/wl_templates/icons",
    templates: [
    {
      title: "Hero unit",
      image: "hero.png",
      description: "A lightweight, flexible component to showcase key content on your site. It works well on marketing and content-heavy sites.",
      html: 
        '<div class="hero-unit">' +
          '<h1>Title 1</h1>' +
          '<p>Tagline</p>' +
        '</div>'
    },
    {
      title: "Media object",
      image: "media.png",
      description: "Abstract object styles for building various types of components (like blog comments, Tweets, etc) that feature a left- or right-aligned image alongside textual content.",
      html: 
        '<div class="media">' +
          '<span class="pull-left">' +
            '(Linked) image here' +
          '</span>' +
          '<div class="media-body">' +
            '<h4 class="media-heading">' +
              'Media heading' +
            '</h4>' +
            '<p>Text here</p>' +
          '</div>' +
        '</div>'
    }]
  });
}