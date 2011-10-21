
  <div id="wrapper" class="<?php print $classes; ?>"<?php print $attributes; ?>>
		<div id="wrapper-inner">
			<div id="header-athena">
				<div id="header-inner">
				
					<a class="mylogo" title="<?php print t('AthenaOne, Inc'); ?>" rel="home" href="<?php print $front_page; ?>"></a>
          
          <?php if ($main_menu || $secondary_menu): ?>
            <div id="nav" class="menu <?php if (!empty($main_menu)) {print "with-primary";} if (!empty($secondary_menu)) {print " with-secondary";} ?>">
              <?php print theme('links', array('links' => $main_menu, 'attributes' => array('id' => 'primary', 'class' => array('links', 'clearfix', 'main-menu')))); ?>
            </div><!-- /nav -->
          <?php endif; ?>
					
          <!--
					<div id="nav">
						<ul>
							<li><a href="#">Home</a></li>
							<li><a href="#">Contact</a></li>
						</ul>
					</div>--><!-- /nav -->
          
          <?php if ($page['header']): ?>
            <div id="header-region">
              <?php print render($page['header']); ?>
            </div>
          <?php endif; ?>
				
				</div><!-- /header-inner -->
				
			
			</div><!-- /header -->
			<div id="container">
				<div id="content">
					
          <div id="content-left">
              <?php if ($page['sidebar_first']): ?>
                 <?php print render($page['sidebar_first']); ?>
              <?php endif; ?> <!-- /sidebar-first -->
						&nbsp;
					</div><!-- /content-left -->
          
          
					<div id="content-right">
						<div id="content-right-inner">
              
							<!--<h1 class="welcome">AthenaOne Capital Family of Businesses</h1>-->
              
              
              
              <?php if ($breadcrumb || $title|| $messages || $tabs || $action_links): ?>
              <div id="content-header">

                <?php print $breadcrumb; ?>

                <?php if ($page['highlight']): ?>
                  <div id="highlight"><?php print render($page['highlight']) ?></div>
                <?php endif; ?>

                <?php if ($title): ?>
                  <h1 class="title"><?php print $title; ?></h1>
                <?php endif; ?>

                <?php print $messages; ?>
                <?php print render($page['help']); ?>

                <?php if ($tabs): ?>
                  <div class="tabs"><?php print render($tabs); ?></div>
                <?php endif; ?>

                <?php if ($action_links): ?>
                  <ul class="action-links"><?php print render($action_links); ?></ul>
                <?php endif; ?>

              </div> <!-- /#content-header -->
            <?php endif; ?>

            <div id="content-area">
              <?php print render($page['content']) ?>
            </div>
              
              <!--
							<ul>
								<li>
									<h2>Speed Dating</h2>
									<span><a href="#">www.nyeasydates.com</a></span>
									<p>Welcome to New York City's easiest, most enjoyable way to meet other singles
									</p>
								</li>
								
								<li>
									<h2>Broker Ratings</h2>
									<span><a href="#">www.mybrokerratings.com</a></span>
									<p>Welcome to New York City's easiest, most enjoyable way to meet other singles
									</p>
								</li>
								
								<li>
									<h2>Options Tradings</h2>
									<span><a href="#">www.mybrokerratings.com</a></span>
									<p>Welcome to New York City's easiest, most enjoyable way to meet other singles
									</p>
								</li>
							</ul>
              -->
						</div><!-- /content-right-inner -->
					</div><!-- /content-right -->
          
				</div><!-- /content -->
				
			</div><!-- /container -->
			
			<hr class="hr"/>
				<div id="footer">
					<div class="footer-copy">&copy;Athena One Capital LLC - All Rights Reserved.</div>
          <?php if ($page['footer']): ?>
              <?php print render($page['footer']); ?>
          <?php endif; ?>
				</div><!-- /footer -->
		
		
		</div><!-- /wrapper-inner -->
	
	</div><!-- /wrapper -->
  
  
  
  
  
  
  
  
  
 