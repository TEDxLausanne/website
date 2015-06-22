<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see bootstrap_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see bootstrap_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>

<header id="navbar" role="banner" class="header <?php print $navbar_classes; ?> isolate">
  <div class="row">
      <div class="navbar-header">
        <a class="logo navbar-btn pull-left" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
          <img src="<?php print $base_path . $directory; ?>/assets/img/logo_tedx.svg" onerror="this.onerror=null; this.src='<?php print $base_path . $directory; ?>/assets/img/logo_tedx.png'" alt="<?php print t('Home'); ?>" />
        </a>

        <!-- .btn-navbar is used as the toggle for collapsed navbar content -->
        <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
          <span class="sr-only">Toggle navigation</span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
        </button>
      </div>

      <?php if (!empty($primary_nav)): ?>
        <div class="navbar-collapse collapse">
          <nav role="navigation">
            <?php if (!empty($primary_nav)): ?>
              <?php print render($primary_nav); ?>
            <?php endif; ?>
          </nav>
          <nav class="lang-nav"><?php print render($page['language']); ?></nav>
        </div>
      <?php endif; ?>
    </div>
</header>

<div class="main-container">

  <header role="banner" id="page-header">
    <?php if (!empty($site_slogan)): ?>
      <p class="lead"><?php print $site_slogan; ?></p>
    <?php endif; ?>

    <?php print render($page['header']); ?>
  </header> <!-- /#page-header -->

  <div>

    <div class="container">
      <div class="row">
        <div class="col-lg-12">
          <?php print $messages; ?>
          <?php if (!empty($tabs)): ?>
            <?php print render($tabs); ?>
          <?php endif; ?>
        </div>
      </div>
    </div>

    <?php if (!empty($page['full_header'])): ?>
      <?php print render($page['full_header']); ?>
    <?php endif; ?>

    <section class="container super-isolate">

      <div class="row">
        <div class="col-md-12">
          <?php if (!empty($page['highlighted'])): ?>
            <div class="highlighted jumbotron"><?php print render($page['highlighted']); ?></div>
          <?php endif; ?>
          <?php if (!empty($breadcrumb)): print $breadcrumb; endif;?>
          <a id="main-content"></a>
          <?php print render($title_prefix); ?>
          <?php if (!empty($title)): ?>
            <h1 class="page-header"><?php print $title; ?></h1>
          <?php endif; ?>
          <?php print render($title_suffix); ?>

          <?php if (!empty($page['help'])): ?>
            <?php print render($page['help']); ?>
          <?php endif; ?>
          <?php if (!empty($action_links)): ?>
            <ul class="action-links"><?php print render($action_links); ?></ul>
          <?php endif; ?>



        <?php if (!empty($page['sidebar_second'])): ?>
          <div class="row">
            <div class="col-md-8">
              <?php print render($page['content']); ?>
            </div>
            <aside class="col-md-3 col-md-offset-1" role="complementary">
              <?php print render($page['sidebar_second']); ?>
            </aside>  <!-- /#sidebar-second -->
          </div>
        <?php else: ?>
            <?php print render($page['content']); ?>
        <?php endif; ?>
        </div>
      </div>

    </section>



    <?php if (!empty($page['full_footer'])): ?>
      <div class="well unisolate-bottom">
        <div class="container">
          <?php print render($page['full_footer']); ?>
          <div class="isolate"></div>
        </div>
      </div>
    <?php endif; ?>

  </div>
</div>


<script>
  (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
  (i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
  m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
  })(window,document,'script','//www.google-analytics.com/analytics.js','ga');

  ga('create', 'UA-36106962-1', 'auto');
  ga('send', 'pageview');

</script>


<footer class="footer dark-background">
  <div class="container super-isolate">
    <div class="row">
      <div class="col-md-2 col-sm-7">
        <div class="footer-col">
          <?php if (!empty($page['footer'])): ?>
            <?php print render($page['footer']); ?>
          <?php endif; ?>
          <h4>TEDXLausanne</h4>
          <p><small><?php print t('This independently organized TEDx event is operated under license from TED.'); ?></small></p>
          <ul class="nav nav-links nav-pills uppercase">
            <li><a href="/about-tedxlausanne"><?php print t('About'); ?></a></li>
            <!-- <li><a href="#">Credits</a></li> -->
          </ul>
        </div>
      </div>
      <div class="col-md-3 col-sm-5">
        <div class="footer-col">
          <h4><?php print t('Get Involved'); ?></h4>
          <?php if (!empty($page['footer_menu'])): ?>
            <?php print render($page['footer_menu']); ?>
          <?php endif; ?>
        </div>
      </div>
      <div class="clearfix visible-sm-block">
        <div class="super-isolate"></div>
      </div>
      <div class="col-md-4 col-sm-7">
        <div class="footer-col">
          <h4><?php print t('Newsletter'); ?></h4>
          <p><?php print t('Get in touch with us and subscribe to our newsletter'); ?></p>
          <form class="form-inline" role="form" action="http://newsletter.tedxlausanne.org/t/d/s/jkldkj/" method="post">
            <div class="form-group">
              <label class="sr-only" for="exampleInputEmail2"><?php print t('Email address'); ?></label>
              <input id="fieldEmail" name="cm-jkldkj-jkldkj" type="email" class="form-control" placeholder="Enter email" required />
            </div>
            <button type="submit" class="btn btn-primary"><?php print t('Subscribe'); ?></button>
          </form>
        </div>
      </div>
      <div class="col-md-3 col-sm-5">
        <h4><?php print t('Connect with&nbsp;us'); ?></h4>
        <ul class="nav-social nav nav-pills">
         <li><a href="http://www.twitter.com/TEDxLausanne"><i class="fa fa-twitter"></i><span>Twitter</span></a></a></li>
         <li><a href="https://www.facebook.com/TEDxLausanne"><i class="fa fa-facebook"></i><span>Facebook</span></a></li>
         <li><a href="https://www.linkedin.com/company/tedxlausanne"><i class="fa fa-linkedin"></i><span>LinkedIn</span></a></li>
         <li><a href="http://instagram.com/tedxlausanne"><i class="fa fa-instagram"></i><span>Instagram</span></a></li>
         <li><a href="https://www.youtube.com/channel/UC97FXhbvEbpb9Bb2YvUDwqw?sub_confirmation=1"><i class="fa fa-youtube"></i><span>Youtube</span></a></li>
         <li><a href="https://www.flickr.com/photos/tedxlausanne"><i class="fa fa-flickr"></i><span>Flickr</span></a></li>
       </ul>
     </div>
   </div>
 </div>
</footer>