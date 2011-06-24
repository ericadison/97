
    

  

<!DOCTYPE html>
<html>
  <head>
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="chrome=1">
    <script type="text/javascript">var NREUMQ=[];NREUMQ.push(["mark","firstbyte",new Date().getTime()]);</script>
        <title>OBD_com.c at tracebug from ericadison/97 - GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />

    <link href="https://a248.e.akamai.net/assets.github.com/01c593cafcf4ceedeac15e518641fe58d213659f/stylesheets/bundle_github.css" media="screen" rel="stylesheet" type="text/css" />
    

    <script type="text/javascript">
      if (typeof console == "undefined" || typeof console.log == "undefined")
        console = { log: function() {} }
    </script>
    <script type="text/javascript" charset="utf-8">
      var GitHub = {
        assetHost: 'https://a248.e.akamai.net/assets.github.com'
      }
      var github_user = 'ericadison'
      
    </script>
    <script src="https://a248.e.akamai.net/assets.github.com/javascripts/jquery/jquery-1.6.1.min.js" type="text/javascript"></script>
    <script src="https://a248.e.akamai.net/assets.github.com/97800c890ae97d4d8fef3ffc1a1743d3dccbe44a/javascripts/bundle_github.js" type="text/javascript"></script>


    
    <script type="text/javascript" charset="utf-8">
      GitHub.spy({
        repo: "ericadison/97"
      })
    </script>

    
  <link rel='canonical' href='/ericadison/97/blob/c26a9d55d29d6663060ca26d118d1a8b4ee5832f/OBD_com.c'>

  <link href="https://github.com/ericadison/97/commits/tracebug.atom" rel="alternate" title="Recent Commits to 97:tracebug" type="application/atom+xml" />

        <meta name="description" content="97 hosted on GitHub" />
    <script type="text/javascript">
      GitHub.nameWithOwner = GitHub.nameWithOwner || "ericadison/97";
      GitHub.currentRef = 'tracebug';
      GitHub.commitSHA = "c26a9d55d29d6663060ca26d118d1a8b4ee5832f";
      GitHub.currentPath = 'OBD_com.c';
      GitHub.masterBranch = "tracebug";

      
    </script>
  

        <script type="text/javascript">
      var _gaq = _gaq || [];
      _gaq.push(['_setAccount', 'UA-3769691-2']);
      _gaq.push(['_setDomainName', 'none']);
      _gaq.push(['_trackPageview']);
      _gaq.push(['_trackPageLoadTime']);
      (function() {
        var ga = document.createElement('script');
        ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
        ga.setAttribute('async', 'true');
        document.documentElement.firstChild.appendChild(ga);
      })();
    </script>

    
  </head>

  

  <body class="logged_in page-blob  windows env-production">
    

    

    

    <div class="subnavd" id="main">
      <div id="header" class="true">
        
          <a class="logo boring" href="https://github.com/">
            
            <img alt="github" class="default" height="45" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov5.png" />
            <!--[if (gt IE 8)|!(IE)]><!-->
            <img alt="github" class="hover" height="45" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov5-hover.png" />
            <!--<![endif]-->
          </a>
        
        
          





  
    <div class="userbox">
      <div class="avatarname">
        <a href="https://github.com/ericadison"><img src="https://secure.gravatar.com/avatar/e90a574da53b94216af4d73a8d721eb8?s=140&d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-140.png" alt="" width="20" height="20"  /></a>
        <a href="https://github.com/ericadison" class="name">ericadison</a>

        
        
      </div>
      <ul class="usernav">
        <li><a href="https://github.com/">Dashboard</a></li>
        <li>
          
          <a href="https://github.com/inbox">Inbox</a>
          <a href="https://github.com/inbox" class="unread_count ">0</a>
        </li>
        <li><a href="https://github.com/account">Account Settings</a></li>
        <li><a href="/logout">Log Out</a></li>
      </ul>
    </div><!-- /.userbox -->
  


        
        <div class="topsearch">
  
    <form action="/search" id="top_search_form" method="get">
      <a href="/search" class="advanced-search tooltipped downwards" title="Advanced Search">Advanced Search</a>
      <div class="search placeholder-field js-placeholder-field">
        <label class="placeholder" for="global-search-field">Search…</label>
        <input type="text" class="search my_repos_autocompleter" id="global-search-field" name="q" results="5" /> <input type="submit" value="Search" class="button" />
      </div>
      <input type="hidden" name="type" value="Everything" />
      <input type="hidden" name="repo" value="" />
      <input type="hidden" name="langOverride" value="" />
      <input type="hidden" name="start_value" value="1" />
    </form>
    <ul class="nav">
      <li><a href="/explore">Explore GitHub</a></li>
      <li><a href="https://gist.github.com">Gist</a></li>
      
      <li><a href="/blog">Blog</a></li>
      
      <li><a href="http://help.github.com">Help</a></li>
    </ul>
  
</div>

      </div>

      
      
        
    <div class="site">
      <div class="pagehead repohead vis-public    instapaper_ignore readability-menu">

      

      <div class="title-actions-bar">
        <h1>
          <a href="/ericadison">ericadison</a> / <strong><a href="/ericadison/97">97</a></strong>
          
          
        </h1>

        
    <ul class="actions">
      

      
        <li class="for-owner" style="display:none"><a href="/ericadison/97/admin" class="minibutton btn-admin "><span><span class="icon"></span>Admin</span></a></li>
        <li>
          <a href="/ericadison/97/toggle_watch" class="minibutton btn-watch " id="watch_button" onclick="var f = document.createElement('form'); f.style.display = 'none'; this.parentNode.appendChild(f); f.method = 'POST'; f.action = this.href;var s = document.createElement('input'); s.setAttribute('type', 'hidden'); s.setAttribute('name', 'authenticity_token'); s.setAttribute('value', 'a6843b4a7098db669586fc1388ec1cd40e5763c7'); f.appendChild(s);f.submit();return false;" style="display:none"><span><span class="icon"></span>Watch</span></a>
          <a href="/ericadison/97/toggle_watch" class="minibutton btn-watch " id="unwatch_button" onclick="var f = document.createElement('form'); f.style.display = 'none'; this.parentNode.appendChild(f); f.method = 'POST'; f.action = this.href;var s = document.createElement('input'); s.setAttribute('type', 'hidden'); s.setAttribute('name', 'authenticity_token'); s.setAttribute('value', 'a6843b4a7098db669586fc1388ec1cd40e5763c7'); f.appendChild(s);f.submit();return false;" style="display:none"><span><span class="icon"></span>Unwatch</span></a>
        </li>
        
          
            <li class="for-notforked" style="display:none"><a href="/ericadison/97/fork" class="minibutton btn-fork " id="fork_button" onclick="var f = document.createElement('form'); f.style.display = 'none'; this.parentNode.appendChild(f); f.method = 'POST'; f.action = this.href;var s = document.createElement('input'); s.setAttribute('type', 'hidden'); s.setAttribute('name', 'authenticity_token'); s.setAttribute('value', 'a6843b4a7098db669586fc1388ec1cd40e5763c7'); f.appendChild(s);f.submit();return false;"><span><span class="icon"></span>Fork</span></a></li>
            <li class="for-hasfork" style="display:none"><a href="#" class="minibutton btn-fork " id="your_fork_button"><span><span class="icon"></span>Your Fork</span></a></li>
          

          <li id='pull_request_item' class='nspr' style='display:none'><a href="/ericadison/97/pull/new/tracebug" class="minibutton btn-pull-request "><span><span class="icon"></span>Pull Request</span></a></li>
        
      
      
      <li class="repostats">
        <ul class="repo-stats">
          <li class="watchers"><a href="/ericadison/97/watchers" title="Watchers" class="tooltipped downwards">1</a></li>
          <li class="forks"><a href="/ericadison/97/network" title="Forks" class="tooltipped downwards">1</a></li>
        </ul>
      </li>
    </ul>

      </div>

        
  <ul class="tabs">
    <li><a href="/ericadison/97" class="selected" highlight="repo_source">Source</a></li>
    <li><a href="/ericadison/97/commits/tracebug" highlight="repo_commits">Commits</a></li>
    <li><a href="/ericadison/97/network" highlight="repo_network">Network</a></li>
    <li><a href="/ericadison/97/pulls" highlight="repo_pulls">Pull Requests (0)</a></li>

    
      <li><a href="/ericadison/97/forkqueue" highlight="repo_fork_queue">Fork Queue</a></li>
    

    
      
      <li><a href="/ericadison/97/issues" highlight="issues">Issues (0)</a></li>
    

                <li><a href="/ericadison/97/wiki" highlight="repo_wiki">Wiki (0)</a></li>
        
    <li><a href="/ericadison/97/graphs" highlight="repo_graphs">Graphs</a></li>

    <li class="contextswitch nochoices">
      <span class="toggle leftwards" >
        <em>Branch:</em>
        <code>tracebug</code>
      </span>
    </li>
  </ul>

  <div style="display:none" id="pl-description"><p><em class="placeholder">click here to add a description</em></p></div>
  <div style="display:none" id="pl-homepage"><p><em class="placeholder">click here to add a homepage</em></p></div>

  <div class="subnav-bar">
  
  <ul>
    <li>
      <a href="/ericadison/97/branches" class="dropdown">Switch Branches (2)</a>
      <ul>
        
          
          
            <li><a href="/ericadison/97/blob/master/OBD_com.c" data-name="master">master</a></li>
          
        
          
            <li><strong>tracebug &#x2713;</strong></li>
            
      </ul>
    </li>
    <li>
      <a href="#" class="dropdown defunct">Switch Tags (0)</a>
      
    </li>
    <li>
    
    <a href="/ericadison/97/branches" class="manage">Branch List</a>
    
    </li>
  </ul>
</div>

  
  
  
  
  
  



        
    <div id="repo_details" class="metabox clearfix">
      <div id="repo_details_loader" class="metabox-loader" style="display:none">Sending Request&hellip;</div>

        <a href="/ericadison/97/downloads" class="download-source" id="download_button" title="Download source, tagged packages and binaries."><span class="icon"></span>Downloads</a>

      <div id="repository_desc_wrapper">
      <div id="repository_description" rel="repository_description_edit">
        
      </div>

      <div id="repository_description_edit" style="display:none;" class="inline-edit">
        <form action="/ericadison/97/admin/update" method="post"><div style="margin:0;padding:0"><input name="authenticity_token" type="hidden" value="a6843b4a7098db669586fc1388ec1cd40e5763c7" /></div>
          <input type="hidden" name="field" value="repository_description">
          <input type="text" class="textfield" name="value" value="">
          <div class="form-actions">
            <button class="minibutton"><span>Save</span></button> &nbsp; <a href="#" class="cancel">Cancel</a>
          </div>
        </form>
      </div>

      
      <div class="repository-homepage" id="repository_homepage" rel="repository_homepage_edit">
        <p><a href="http://" rel="nofollow"></a></p>
      </div>

      <div id="repository_homepage_edit" style="display:none;" class="inline-edit">
        <form action="/ericadison/97/admin/update" method="post"><div style="margin:0;padding:0"><input name="authenticity_token" type="hidden" value="a6843b4a7098db669586fc1388ec1cd40e5763c7" /></div>
          <input type="hidden" name="field" value="repository_homepage">
          <input type="text" class="textfield" name="value" value="">
          <div class="form-actions">
            <button class="minibutton"><span>Save</span></button> &nbsp; <a href="#" class="cancel">Cancel</a>
          </div>
        </form>
      </div>
      </div>
      <div class="rule editable-only"></div>
      <div id="url_box" class="url-box">
  

  <ul class="clone-urls">
    
      
        <li id="private_clone_url"><a href="git@github.com:ericadison/97.git" data-permissions="Read+Write">SSH</a></li>
      
      <li id="http_clone_url"><a href="https://ericadison@github.com/ericadison/97.git" data-permissions="Read+Write">HTTP</a></li>
      <li id="public_clone_url"><a href="git://github.com/ericadison/97.git" data-permissions="Read-Only">Git Read-Only</a></li>
    
    
  </ul>
  <input type="text" spellcheck="false" id="url_field" class="url-field" />
        <span style="display:none" id="url_box_clippy"></span>
      <span id="clippy_tooltip_url_box_clippy" class="clippy-tooltip tooltipped" title="copy to clipboard">
      <object classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000"
              width="14"
              height="14"
              class="clippy"
              id="clippy" >
      <param name="movie" value="https://a248.e.akamai.net/assets.github.com/flash/clippy.swf?v5"/>
      <param name="allowScriptAccess" value="always" />
      <param name="quality" value="high" />
      <param name="scale" value="noscale" />
      <param NAME="FlashVars" value="id=url_box_clippy&amp;copied=&amp;copyto=">
      <param name="bgcolor" value="#FFFFFF">
      <param name="wmode" value="opaque">
      <embed src="https://a248.e.akamai.net/assets.github.com/flash/clippy.swf?v5"
             width="14"
             height="14"
             name="clippy"
             quality="high"
             allowScriptAccess="always"
             type="application/x-shockwave-flash"
             pluginspage="http://www.macromedia.com/go/getflashplayer"
             FlashVars="id=url_box_clippy&amp;copied=&amp;copyto="
             bgcolor="#FFFFFF"
             wmode="opaque"
      />
      </object>
      </span>

  <p id="url_description"><strong>Read+Write</strong> access</p>
</div>

    </div>

    <div class="frame frame-center tree-finder" style="display:none">
      <div class="breadcrumb">
        <b><a href="/ericadison/97">97</a></b> /
        <input class="tree-finder-input" type="text" name="query" autocomplete="off" spellcheck="false">
      </div>

      
        <div class="octotip">
          <p>
            <a href="/ericadison/97/dismiss-tree-finder-help" class="dismiss js-dismiss-tree-list-help" title="Hide this notice forever">Dismiss</a>
            <strong>Octotip:</strong> You've activated the <em>file finder</em> by pressing <span class="kbd">t</span>
            Start typing to filter the file list. Use <span class="kbd badmono">↑</span> and <span class="kbd badmono">↓</span> to navigate,
            <span class="kbd">enter</span> to view files.
          </p>
        </div>
      

      <table class="tree-browser" cellpadding="0" cellspacing="0">
        <tr class="js-header"><th>&nbsp;</th><th>name</th></tr>
        <tr class="js-no-results no-results" style="display: none">
          <th colspan="2">No matching files</th>
        </tr>
        <tbody class="js-results-list">
        </tbody>
      </table>
    </div>

    <div id="jump-to-line" style="display:none">
      <h2>Jump to Line</h2>
      <form>
        <input class="textfield" type="text">
        <div class="full-button">
          <button type="submit" class="classy">
            <span>Go</span>
          </button>
        </div>
      </form>
    </div>


        

      </div><!-- /.pagehead -->

      

  







<script type="text/javascript">
  GitHub.downloadRepo = '/ericadison/97/archives/tracebug'
  GitHub.revType = "ref"

  GitHub.repoName = "97"
  GitHub.controllerName = "blob"
  GitHub.actionName     = "show"
  GitHub.currentAction  = "blob#show"

  
    GitHub.loggedIn = true
    GitHub.hasWriteAccess = true
    GitHub.hasAdminAccess = true
    GitHub.watchingRepo = true
    GitHub.ignoredRepo = false
    GitHub.hasForkOfRepo = null
    GitHub.hasForked = true
  

  
</script>




<div class="flash-messages"></div>


  <div id="commit">
    <div class="group">
        
  <div class="envelope commit">
    <div class="human">
      
        <div class="message"><pre><a href="/ericadison/97/commit/c26a9d55d29d6663060ca26d118d1a8b4ee5832f">fgds</a> </pre></div>
      

      <div class="actor">
        <div class="gravatar">
          
          <img src="https://secure.gravatar.com/avatar/e90a574da53b94216af4d73a8d721eb8?s=140&d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-140.png" alt="" width="30" height="30"  />
        </div>
        <div class="name"><a href="/ericadison">ericadison</a> <span>(author)</span></div>
        <div class="date">
          <time class="js-relative-date" datetime="2011-06-24T02:24:07-07:00" title="2011-06-24 02:24:07">June 24, 2011</time>
        </div>
      </div>

      

    </div>
    <div class="machine">
      <span>c</span>ommit&nbsp;&nbsp;<a href="/ericadison/97/commit/c26a9d55d29d6663060ca26d118d1a8b4ee5832f" hotkey="c">c26a9d55d29d6663060c</a><br />
      <span>t</span>ree&nbsp;&nbsp;&nbsp;&nbsp;<a href="/ericadison/97/tree/c26a9d55d29d6663060ca26d118d1a8b4ee5832f" hotkey="t">0a7945ba68cd2fb00226</a><br />
      
        <span>p</span>arent&nbsp;
        
        <a href="/ericadison/97/tree/1e08ebe8dc28dcb6f08d5d3faff296634860ced3" hotkey="p">1e08ebe8dc28dcb6f08d</a>
      

    </div>
  </div>

    </div>
  </div>



  <div id="slider">

  

    <div class="breadcrumb" data-path="OBD_com.c/">
      <b><a href="/ericadison/97/tree/c26a9d55d29d6663060ca26d118d1a8b4ee5832f">97</a></b> / OBD_com.c       <span style="display:none" id="clippy_899">OBD_com.c</span>
      
      <object classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000"
              width="110"
              height="14"
              class="clippy"
              id="clippy" >
      <param name="movie" value="https://a248.e.akamai.net/assets.github.com/flash/clippy.swf?v5"/>
      <param name="allowScriptAccess" value="always" />
      <param name="quality" value="high" />
      <param name="scale" value="noscale" />
      <param NAME="FlashVars" value="id=clippy_899&amp;copied=copied!&amp;copyto=copy to clipboard">
      <param name="bgcolor" value="#FFFFFF">
      <param name="wmode" value="opaque">
      <embed src="https://a248.e.akamai.net/assets.github.com/flash/clippy.swf?v5"
             width="110"
             height="14"
             name="clippy"
             quality="high"
             allowScriptAccess="always"
             type="application/x-shockwave-flash"
             pluginspage="http://www.macromedia.com/go/getflashplayer"
             FlashVars="id=clippy_899&amp;copied=copied!&amp;copyto=copy to clipboard"
             bgcolor="#FFFFFF"
             wmode="opaque"
      />
      </object>
      

    </div>

    <div class="frames">
      <div class="frame frame-center" data-path="OBD_com.c/" data-canonical-url="/ericadison/97/blob/c26a9d55d29d6663060ca26d118d1a8b4ee5832f/OBD_com.c">
        
          <ul class="big-actions">
            
            <li><a class="file-edit-link minibutton" href="/ericadison/97/edit/__current_ref__/OBD_com.c"><span>Edit this file</span></a></li>
          </ul>
        

        <div id="files">
          <div class="file">
            <div class="meta">
              <div class="info">
                <span class="icon"><img alt="Txt" height="16" src="https://a248.e.akamai.net/assets.github.com/images/icons/txt.png" width="16" /></span>
                <span class="mode" title="File Mode">100644</span>
                
                  <span>367 lines (308 sloc)</span>
                
                <span>13.932 kb</span>
              </div>
              <ul class="actions">
                <li><a href="/ericadison/97/raw/tracebug/OBD_com.c" id="raw-url">raw</a></li>
                
                  <li><a href="/ericadison/97/blame/tracebug/OBD_com.c">blame</a></li>
                
                <li><a href="/ericadison/97/commits/tracebug/OBD_com.c">history</a></li>
              </ul>
            </div>
            
  <div class="data type-c">
    
      <table cellpadding="0" cellspacing="0">
        <tr>
          <td>
            <pre class="line_numbers"><span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>
<span id="L85" rel="#L85">85</span>
<span id="L86" rel="#L86">86</span>
<span id="L87" rel="#L87">87</span>
<span id="L88" rel="#L88">88</span>
<span id="L89" rel="#L89">89</span>
<span id="L90" rel="#L90">90</span>
<span id="L91" rel="#L91">91</span>
<span id="L92" rel="#L92">92</span>
<span id="L93" rel="#L93">93</span>
<span id="L94" rel="#L94">94</span>
<span id="L95" rel="#L95">95</span>
<span id="L96" rel="#L96">96</span>
<span id="L97" rel="#L97">97</span>
<span id="L98" rel="#L98">98</span>
<span id="L99" rel="#L99">99</span>
<span id="L100" rel="#L100">100</span>
<span id="L101" rel="#L101">101</span>
<span id="L102" rel="#L102">102</span>
<span id="L103" rel="#L103">103</span>
<span id="L104" rel="#L104">104</span>
<span id="L105" rel="#L105">105</span>
<span id="L106" rel="#L106">106</span>
<span id="L107" rel="#L107">107</span>
<span id="L108" rel="#L108">108</span>
<span id="L109" rel="#L109">109</span>
<span id="L110" rel="#L110">110</span>
<span id="L111" rel="#L111">111</span>
<span id="L112" rel="#L112">112</span>
<span id="L113" rel="#L113">113</span>
<span id="L114" rel="#L114">114</span>
<span id="L115" rel="#L115">115</span>
<span id="L116" rel="#L116">116</span>
<span id="L117" rel="#L117">117</span>
<span id="L118" rel="#L118">118</span>
<span id="L119" rel="#L119">119</span>
<span id="L120" rel="#L120">120</span>
<span id="L121" rel="#L121">121</span>
<span id="L122" rel="#L122">122</span>
<span id="L123" rel="#L123">123</span>
<span id="L124" rel="#L124">124</span>
<span id="L125" rel="#L125">125</span>
<span id="L126" rel="#L126">126</span>
<span id="L127" rel="#L127">127</span>
<span id="L128" rel="#L128">128</span>
<span id="L129" rel="#L129">129</span>
<span id="L130" rel="#L130">130</span>
<span id="L131" rel="#L131">131</span>
<span id="L132" rel="#L132">132</span>
<span id="L133" rel="#L133">133</span>
<span id="L134" rel="#L134">134</span>
<span id="L135" rel="#L135">135</span>
<span id="L136" rel="#L136">136</span>
<span id="L137" rel="#L137">137</span>
<span id="L138" rel="#L138">138</span>
<span id="L139" rel="#L139">139</span>
<span id="L140" rel="#L140">140</span>
<span id="L141" rel="#L141">141</span>
<span id="L142" rel="#L142">142</span>
<span id="L143" rel="#L143">143</span>
<span id="L144" rel="#L144">144</span>
<span id="L145" rel="#L145">145</span>
<span id="L146" rel="#L146">146</span>
<span id="L147" rel="#L147">147</span>
<span id="L148" rel="#L148">148</span>
<span id="L149" rel="#L149">149</span>
<span id="L150" rel="#L150">150</span>
<span id="L151" rel="#L151">151</span>
<span id="L152" rel="#L152">152</span>
<span id="L153" rel="#L153">153</span>
<span id="L154" rel="#L154">154</span>
<span id="L155" rel="#L155">155</span>
<span id="L156" rel="#L156">156</span>
<span id="L157" rel="#L157">157</span>
<span id="L158" rel="#L158">158</span>
<span id="L159" rel="#L159">159</span>
<span id="L160" rel="#L160">160</span>
<span id="L161" rel="#L161">161</span>
<span id="L162" rel="#L162">162</span>
<span id="L163" rel="#L163">163</span>
<span id="L164" rel="#L164">164</span>
<span id="L165" rel="#L165">165</span>
<span id="L166" rel="#L166">166</span>
<span id="L167" rel="#L167">167</span>
<span id="L168" rel="#L168">168</span>
<span id="L169" rel="#L169">169</span>
<span id="L170" rel="#L170">170</span>
<span id="L171" rel="#L171">171</span>
<span id="L172" rel="#L172">172</span>
<span id="L173" rel="#L173">173</span>
<span id="L174" rel="#L174">174</span>
<span id="L175" rel="#L175">175</span>
<span id="L176" rel="#L176">176</span>
<span id="L177" rel="#L177">177</span>
<span id="L178" rel="#L178">178</span>
<span id="L179" rel="#L179">179</span>
<span id="L180" rel="#L180">180</span>
<span id="L181" rel="#L181">181</span>
<span id="L182" rel="#L182">182</span>
<span id="L183" rel="#L183">183</span>
<span id="L184" rel="#L184">184</span>
<span id="L185" rel="#L185">185</span>
<span id="L186" rel="#L186">186</span>
<span id="L187" rel="#L187">187</span>
<span id="L188" rel="#L188">188</span>
<span id="L189" rel="#L189">189</span>
<span id="L190" rel="#L190">190</span>
<span id="L191" rel="#L191">191</span>
<span id="L192" rel="#L192">192</span>
<span id="L193" rel="#L193">193</span>
<span id="L194" rel="#L194">194</span>
<span id="L195" rel="#L195">195</span>
<span id="L196" rel="#L196">196</span>
<span id="L197" rel="#L197">197</span>
<span id="L198" rel="#L198">198</span>
<span id="L199" rel="#L199">199</span>
<span id="L200" rel="#L200">200</span>
<span id="L201" rel="#L201">201</span>
<span id="L202" rel="#L202">202</span>
<span id="L203" rel="#L203">203</span>
<span id="L204" rel="#L204">204</span>
<span id="L205" rel="#L205">205</span>
<span id="L206" rel="#L206">206</span>
<span id="L207" rel="#L207">207</span>
<span id="L208" rel="#L208">208</span>
<span id="L209" rel="#L209">209</span>
<span id="L210" rel="#L210">210</span>
<span id="L211" rel="#L211">211</span>
<span id="L212" rel="#L212">212</span>
<span id="L213" rel="#L213">213</span>
<span id="L214" rel="#L214">214</span>
<span id="L215" rel="#L215">215</span>
<span id="L216" rel="#L216">216</span>
<span id="L217" rel="#L217">217</span>
<span id="L218" rel="#L218">218</span>
<span id="L219" rel="#L219">219</span>
<span id="L220" rel="#L220">220</span>
<span id="L221" rel="#L221">221</span>
<span id="L222" rel="#L222">222</span>
<span id="L223" rel="#L223">223</span>
<span id="L224" rel="#L224">224</span>
<span id="L225" rel="#L225">225</span>
<span id="L226" rel="#L226">226</span>
<span id="L227" rel="#L227">227</span>
<span id="L228" rel="#L228">228</span>
<span id="L229" rel="#L229">229</span>
<span id="L230" rel="#L230">230</span>
<span id="L231" rel="#L231">231</span>
<span id="L232" rel="#L232">232</span>
<span id="L233" rel="#L233">233</span>
<span id="L234" rel="#L234">234</span>
<span id="L235" rel="#L235">235</span>
<span id="L236" rel="#L236">236</span>
<span id="L237" rel="#L237">237</span>
<span id="L238" rel="#L238">238</span>
<span id="L239" rel="#L239">239</span>
<span id="L240" rel="#L240">240</span>
<span id="L241" rel="#L241">241</span>
<span id="L242" rel="#L242">242</span>
<span id="L243" rel="#L243">243</span>
<span id="L244" rel="#L244">244</span>
<span id="L245" rel="#L245">245</span>
<span id="L246" rel="#L246">246</span>
<span id="L247" rel="#L247">247</span>
<span id="L248" rel="#L248">248</span>
<span id="L249" rel="#L249">249</span>
<span id="L250" rel="#L250">250</span>
<span id="L251" rel="#L251">251</span>
<span id="L252" rel="#L252">252</span>
<span id="L253" rel="#L253">253</span>
<span id="L254" rel="#L254">254</span>
<span id="L255" rel="#L255">255</span>
<span id="L256" rel="#L256">256</span>
<span id="L257" rel="#L257">257</span>
<span id="L258" rel="#L258">258</span>
<span id="L259" rel="#L259">259</span>
<span id="L260" rel="#L260">260</span>
<span id="L261" rel="#L261">261</span>
<span id="L262" rel="#L262">262</span>
<span id="L263" rel="#L263">263</span>
<span id="L264" rel="#L264">264</span>
<span id="L265" rel="#L265">265</span>
<span id="L266" rel="#L266">266</span>
<span id="L267" rel="#L267">267</span>
<span id="L268" rel="#L268">268</span>
<span id="L269" rel="#L269">269</span>
<span id="L270" rel="#L270">270</span>
<span id="L271" rel="#L271">271</span>
<span id="L272" rel="#L272">272</span>
<span id="L273" rel="#L273">273</span>
<span id="L274" rel="#L274">274</span>
<span id="L275" rel="#L275">275</span>
<span id="L276" rel="#L276">276</span>
<span id="L277" rel="#L277">277</span>
<span id="L278" rel="#L278">278</span>
<span id="L279" rel="#L279">279</span>
<span id="L280" rel="#L280">280</span>
<span id="L281" rel="#L281">281</span>
<span id="L282" rel="#L282">282</span>
<span id="L283" rel="#L283">283</span>
<span id="L284" rel="#L284">284</span>
<span id="L285" rel="#L285">285</span>
<span id="L286" rel="#L286">286</span>
<span id="L287" rel="#L287">287</span>
<span id="L288" rel="#L288">288</span>
<span id="L289" rel="#L289">289</span>
<span id="L290" rel="#L290">290</span>
<span id="L291" rel="#L291">291</span>
<span id="L292" rel="#L292">292</span>
<span id="L293" rel="#L293">293</span>
<span id="L294" rel="#L294">294</span>
<span id="L295" rel="#L295">295</span>
<span id="L296" rel="#L296">296</span>
<span id="L297" rel="#L297">297</span>
<span id="L298" rel="#L298">298</span>
<span id="L299" rel="#L299">299</span>
<span id="L300" rel="#L300">300</span>
<span id="L301" rel="#L301">301</span>
<span id="L302" rel="#L302">302</span>
<span id="L303" rel="#L303">303</span>
<span id="L304" rel="#L304">304</span>
<span id="L305" rel="#L305">305</span>
<span id="L306" rel="#L306">306</span>
<span id="L307" rel="#L307">307</span>
<span id="L308" rel="#L308">308</span>
<span id="L309" rel="#L309">309</span>
<span id="L310" rel="#L310">310</span>
<span id="L311" rel="#L311">311</span>
<span id="L312" rel="#L312">312</span>
<span id="L313" rel="#L313">313</span>
<span id="L314" rel="#L314">314</span>
<span id="L315" rel="#L315">315</span>
<span id="L316" rel="#L316">316</span>
<span id="L317" rel="#L317">317</span>
<span id="L318" rel="#L318">318</span>
<span id="L319" rel="#L319">319</span>
<span id="L320" rel="#L320">320</span>
<span id="L321" rel="#L321">321</span>
<span id="L322" rel="#L322">322</span>
<span id="L323" rel="#L323">323</span>
<span id="L324" rel="#L324">324</span>
<span id="L325" rel="#L325">325</span>
<span id="L326" rel="#L326">326</span>
<span id="L327" rel="#L327">327</span>
<span id="L328" rel="#L328">328</span>
<span id="L329" rel="#L329">329</span>
<span id="L330" rel="#L330">330</span>
<span id="L331" rel="#L331">331</span>
<span id="L332" rel="#L332">332</span>
<span id="L333" rel="#L333">333</span>
<span id="L334" rel="#L334">334</span>
<span id="L335" rel="#L335">335</span>
<span id="L336" rel="#L336">336</span>
<span id="L337" rel="#L337">337</span>
<span id="L338" rel="#L338">338</span>
<span id="L339" rel="#L339">339</span>
<span id="L340" rel="#L340">340</span>
<span id="L341" rel="#L341">341</span>
<span id="L342" rel="#L342">342</span>
<span id="L343" rel="#L343">343</span>
<span id="L344" rel="#L344">344</span>
<span id="L345" rel="#L345">345</span>
<span id="L346" rel="#L346">346</span>
<span id="L347" rel="#L347">347</span>
<span id="L348" rel="#L348">348</span>
<span id="L349" rel="#L349">349</span>
<span id="L350" rel="#L350">350</span>
<span id="L351" rel="#L351">351</span>
<span id="L352" rel="#L352">352</span>
<span id="L353" rel="#L353">353</span>
<span id="L354" rel="#L354">354</span>
<span id="L355" rel="#L355">355</span>
<span id="L356" rel="#L356">356</span>
<span id="L357" rel="#L357">357</span>
<span id="L358" rel="#L358">358</span>
<span id="L359" rel="#L359">359</span>
<span id="L360" rel="#L360">360</span>
<span id="L361" rel="#L361">361</span>
<span id="L362" rel="#L362">362</span>
<span id="L363" rel="#L363">363</span>
<span id="L364" rel="#L364">364</span>
<span id="L365" rel="#L365">365</span>
<span id="L366" rel="#L366">366</span>
<span id="L367" rel="#L367">367</span>
</pre>
          </td>
          <td width="100%">
            
              
                <div class="highlight"><pre><div class='line' id='LC1'><span class="cm">/*************************************************************************</span></div><div class='line' id='LC2'><span class="cm">**    (C) 1996 - 2010 IXXAT Automation GmbH, all rights reserved</span></div><div class='line' id='LC3'><span class="cm">**************************************************************************</span></div><div class='line' id='LC4'><span class="cm">**</span></div><div class='line' id='LC5'><span class="cm">**       File: OBD_com.c</span></div><div class='line' id='LC6'><span class="cm">**    Summary: definition of the object directory concerning the communication</span></div><div class='line' id='LC7'><span class="cm">**             must be encoded by user</span></div><div class='line' id='LC8'><span class="cm">**    Version: 4.30.04</span></div><div class='line' id='LC9'><span class="cm">**</span></div><div class='line' id='LC10'><span class="cm">**************************************************************************</span></div><div class='line' id='LC11'><span class="cm">**************************************************************************</span></div><div class='line' id='LC12'><span class="cm">**cxvxcvxcv</span></div><div class='line' id='LC13'><span class="cm">**  Functions: </span></div><div class='line' id='LC14'><span class="cm">**             </span></div><div class='line' id='LC15'><span class="cm">**</span></div><div class='line' id='LC16'><span class="cm">**wxccwxcwxcx</span></div><div class='line' id='LC17'><span class="cm">**</span></div><div class='line' id='LC18'><span class="cm">**************************************************************************</span></div><div class='line' id='LC19'><span class="cm">**    all rights reserved</span></div><div class='line' id='LC20'><span class="cm">*************************************************************************/</span></div><div class='line' id='LC21'><span class="cp">#include &quot;Target.h&quot;</span></div><div class='line' id='LC22'><span class="cp">#include &quot;Integral.h&quot;</span></div><div class='line' id='LC23'><span class="cp">#include &quot;COPcfg.h&quot;</span></div><div class='line' id='LC24'><span class="cp">#include &quot;COP.h&quot;</span></div><div class='line' id='LC25'><span class="cp">#include &quot;DLL.h&quot;</span></div><div class='line' id='LC26'><span class="cp">#include &quot;OBD.h&quot;</span></div><div class='line' id='LC27'><span class="cp">#include &quot;PDO.h&quot;</span></div><div class='line' id='LC28'><span class="cp">#include &quot;OBD_com.h&quot;</span></div><div class='line' id='LC29'><span class="cp">#include &quot;USRfkt.h&quot;</span></div><div class='line' id='LC30'><br/></div><div class='line' id='LC31'><span class="c1">//fdsjhkfdsgsd</span></div><div class='line' id='LC32'><span class="n">sdfsdf</span></div><div class='line' id='LC33'><span class="n">sdf</span></div><div class='line' id='LC34'><span class="n">sdf</span></div><div class='line' id='LC35'><br/></div><div class='line' id='LC36'><span class="cm">/*************************************************************************</span></div><div class='line' id='LC37'><span class="cm">**  defines  </span></div><div class='line' id='LC38'><span class="cm">*************************************************************************/</span></div><div class='line' id='LC39'><span class="cp">/* defines the number of subindices for Tx-Communication Object entry*/</span></div><div class='line' id='LC40'><span class="cp">#ifdef PDO_EVENT_TIMED</span></div><div class='line' id='LC41'><span class="cp"> #define TX_COM_NUMBER_OF_ENTRIES ((UINT8)5)</span></div><div class='line' id='LC42'><span class="cp">#else</span></div><div class='line' id='LC43'><span class="cp"> #ifdef INHIBIT_TIME</span></div><div class='line' id='LC44'><span class="cp">  #define TX_COM_NUMBER_OF_ENTRIES ((UINT8)3)</span></div><div class='line' id='LC45'><span class="cp"> #else</span></div><div class='line' id='LC46'><span class="cp">  #define TX_COM_NUMBER_OF_ENTRIES ((UINT8)2)</span></div><div class='line' id='LC47'><span class="cp"> #endif</span></div><div class='line' id='LC48'><span class="cp">#endif</span></div><div class='line' id='LC49'><span class="cp">#if defined (PDO_EVENT_TIMED) &amp;&amp; defined (PDO_CHECK_RX_TIMEOUT)</span></div><div class='line' id='LC50'><span class="cp">  #define RX_COM_NUMBER_OF_ENTRIES ((UINT8)5)</span></div><div class='line' id='LC51'><span class="cp">#else</span></div><div class='line' id='LC52'><span class="cp">  #define RX_COM_NUMBER_OF_ENTRIES ((UINT8)2)  </span></div><div class='line' id='LC53'><span class="cp">#endif</span></div><div class='line' id='LC54'><br/></div><div class='line' id='LC55'><span class="cp">#ifdef PDO_EVENT_TIMED</span></div><div class='line' id='LC56'><span class="cp">#define PDO_EVENT_TIME ,0</span></div><div class='line' id='LC57'><span class="cp">#else</span></div><div class='line' id='LC58'><span class="cp">#define PDO_EVENT_TIME</span></div><div class='line' id='LC59'><span class="cp">#endif</span></div><div class='line' id='LC60'><br/></div><div class='line' id='LC61'><span class="cp">#if (OBD_CHECK_OBJ_RANGE != OBD_CHECK_OBJ_RANGE_DISABLED)</span></div><div class='line' id='LC62'><span class="cp"> #define RANGE_NULL NULL,</span></div><div class='line' id='LC63'><span class="cp"> #define RANGE(x) (UINT8 ROMCONST *)x,</span></div><div class='line' id='LC64'><span class="cp">#else   </span><span class="cm">/* (OBD_CHECK_OBJ_RANGE != OBD_CHECK_OBJ_RANGE_DISABLED) */</span><span class="cp"></span></div><div class='line' id='LC65'><span class="cp"> #define RANGE_NULL</span></div><div class='line' id='LC66'><span class="cp"> #define RANGE(x)</span></div><div class='line' id='LC67'><span class="cp">#endif  </span><span class="cm">/* (OBD_CHECK_OBJ_RANGE != OBD_CHECK_OBJ_RANGE_DISABLED) */</span><span class="cp"></span></div><div class='line' id='LC68'><br/></div><div class='line' id='LC69'><span class="cp">/* when Auto-Swapping and/or USE_DATA_TYPE is enabled, no default PDO mapping is allowed */</span></div><div class='line' id='LC70'><span class="cp">#if (COP_AUTO_SWAPPING != 0) || (USE_DATA_TYPE == 1)</span></div><div class='line' id='LC71'><span class="cp">#define DEFAULT_CALLBACK NULLCLBK</span></div><div class='line' id='LC72'><span class="cp">#else</span></div><div class='line' id='LC73'><span class="cp">#define DEFAULT_CALLBACK USR_PDOFkt</span></div><div class='line' id='LC74'><span class="cp">#endif</span></div><div class='line' id='LC75'><br/></div><div class='line' id='LC76'><span class="cm">/*************************************************************************</span></div><div class='line' id='LC77'><span class="cm">**    object dictionary</span></div><div class='line' id='LC78'><span class="cm">*************************************************************************/</span></div><div class='line' id='LC79'><br/></div><div class='line' id='LC80'><span class="cm">/*************************************************************************</span></div><div class='line' id='LC81'><span class="cm">**  communication profile definition of values</span></div><div class='line' id='LC82'><span class="cm">*************************************************************************/</span></div><div class='line' id='LC83'><span class="n">UINT32</span> <span class="n">ROMCONST</span>    <span class="n">d_DeviceTyp</span><span class="o">=</span><span class="mh">0xF0191UL</span><span class="p">;</span></div><div class='line' id='LC84'><br/></div><div class='line' id='LC85'><span class="n">UINT8</span> <span class="n">ROMCONST</span>    <span class="n">d_ErrorReg</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC86'><br/></div><div class='line' id='LC87'><span class="n">UINT8</span>  <span class="n">ROMCONST</span>    <span class="n">MAN_DEV_Name</span><span class="p">[]</span> <span class="o">=</span><span class="s">&quot;ADISON&quot;</span><span class="p">;</span></div><div class='line' id='LC88'><span class="n">UINT8</span>  <span class="n">ROMCONST</span>    <span class="n">MAN_HW_Ver</span><span class="p">[]</span>   <span class="o">=</span><span class="s">&quot;CM00097A&quot;</span><span class="p">;</span></div><div class='line' id='LC89'><span class="n">UINT8</span>  <span class="n">ROMCONST</span>    <span class="n">MAN_SW_Ver</span><span class="p">[]</span>   <span class="o">=</span><span class="s">&quot;1.00&quot;</span><span class="p">;</span></div><div class='line' id='LC90'><br/></div><div class='line' id='LC91'><span class="cp">#ifdef SYNC_OBJ</span></div><div class='line' id='LC92'><span class="cm">/* set sync id */</span></div><div class='line' id='LC93'><span class="n">UINT32</span> <span class="n">ROMCONST</span>    <span class="n">d_SyncId</span><span class="o">=</span><span class="mh">0x80</span><span class="p">;</span></div><div class='line' id='LC94'><span class="cp"> #ifdef SYNC_MASTER</span></div><div class='line' id='LC95'>&nbsp;<span class="n">UINT32</span> <span class="n">ROMCONST</span>    <span class="n">d_CommCyclePeriod</span><span class="o">=</span><span class="mh">0x0</span><span class="p">;</span></div><div class='line' id='LC96'><span class="cp"> #endif</span></div><div class='line' id='LC97'><span class="cp">#endif</span></div><div class='line' id='LC98'><br/></div><div class='line' id='LC99'><span class="cp">#if (TIME_OBJ != TIME_NOT)</span></div><div class='line' id='LC100'><span class="cm">/* set timestamp valid */</span></div><div class='line' id='LC101'><span class="n">UINT32</span> <span class="n">ROMCONST</span>    <span class="n">d_TimeStampId</span><span class="o">=</span><span class="mh">0x100UL</span><span class="p">;</span>   </div><div class='line' id='LC102'><span class="cp">#endif</span></div><div class='line' id='LC103'><br/></div><div class='line' id='LC104'><span class="cp">#ifdef EMCY_OBJ</span></div><div class='line' id='LC105'><span class="cm">/* set emcy valid */</span></div><div class='line' id='LC106'><span class="n">UINT32</span> <span class="n">ROMCONST</span>    <span class="n">d_EmergencyId</span><span class="o">=</span><span class="mh">0x0UL</span><span class="p">;</span></div><div class='line' id='LC107'><span class="cp">#endif</span></div><div class='line' id='LC108'><br/></div><div class='line' id='LC109'><span class="cp">#ifdef NODE_GUARDING</span></div><div class='line' id='LC110'><span class="cm">/* set default guarding parameter */</span></div><div class='line' id='LC111'><span class="n">UINT16</span> <span class="n">ROMCONST</span>    <span class="n">d_GuardTime</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC112'><span class="n">UINT8</span>  <span class="n">ROMCONST</span>    <span class="n">d_LifeTime</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC113'><span class="cp">#endif</span></div><div class='line' id='LC114'><br/></div><div class='line' id='LC115'><span class="cp">#ifdef RE_STORE_VALUE</span></div><div class='line' id='LC116'><span class="n">UINT8</span>  <span class="n">ROMCONST</span>    <span class="n">d_ReStorePara_00</span><span class="o">=</span><span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC117'><span class="n">UINT32</span> <span class="n">ROMCONST</span>    <span class="n">d_ReStorePara_01</span><span class="o">=</span><span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC118'><br/></div><div class='line' id='LC119'><span class="n">UINT8</span>  <span class="n">ROMCONST</span>    <span class="n">d_StorePara_00</span><span class="o">=</span><span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC120'><span class="n">UINT32</span> <span class="n">ROMCONST</span>    <span class="n">d_StorePara_01</span><span class="o">=</span><span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC121'><span class="cp">#endif</span></div><div class='line' id='LC122'><br/></div><div class='line' id='LC123'><span class="n">UINT8</span> <span class="n">ROMCONST</span>     <span class="n">d_Identity_00</span><span class="o">=</span><span class="mi">4</span><span class="p">;</span></div><div class='line' id='LC124'><br/></div><div class='line' id='LC125'><span class="n">UINT32</span> <span class="n">ROMCONST</span> <span class="n">d_Vendor_ID</span>      <span class="o">=</span><span class="mh">0x00000001UL</span><span class="p">;</span> <span class="cm">/* Vendor ID invalid */</span></div><div class='line' id='LC126'><span class="n">UINT32</span> <span class="n">ROMCONST</span> <span class="n">d_Product_code</span>   <span class="o">=</span><span class="mh">0x49038903UL</span><span class="p">;</span></div><div class='line' id='LC127'><span class="n">UINT32</span> <span class="n">ROMCONST</span> <span class="n">d_Revision_number</span><span class="o">=</span><span class="mh">0x00000001UL</span><span class="p">;</span></div><div class='line' id='LC128'><br/></div><div class='line' id='LC129'><span class="cp">#ifdef HEARTBEAT</span></div><div class='line' id='LC130'><span class="n">UINT16</span> <span class="n">ROMCONST</span>    <span class="n">d_HeartbeatTime</span><span class="o">=</span><span class="mi">1000</span><span class="p">;</span></div><div class='line' id='LC131'><span class="cp">#endif</span></div><div class='line' id='LC132'><br/></div><div class='line' id='LC133'><span class="cp">#if (NMS_ENABLE_ERROR_BEHAVIOR == NMS_k_ERROR_BEHAVIOR_1029)</span></div><div class='line' id='LC134'><span class="n">UINT8</span>  <span class="n">ROMCONST</span>    <span class="n">d_b_ErrorBehavior_00</span>  <span class="o">=</span> <span class="n">NMS_k_ERROR_BEHAVIOR_NUM_CLASSES</span><span class="p">;</span> <span class="cm">/* Subindex 0: No of error classes */</span></div><div class='line' id='LC135'><span class="n">UINT8</span>  <span class="n">ROMCONST</span>    <span class="n">d_b_ErrorBehaviorValue</span><span class="o">=</span> <span class="mi">0</span><span class="p">;</span>  <span class="cm">/* switch to PREOPERATIONAL */</span></div><div class='line' id='LC136'><span class="cp">#endif</span></div><div class='line' id='LC137'><br/></div><div class='line' id='LC138'><span class="n">UINT16</span> <span class="n">ROMCONST</span>    <span class="n">d_w_Zero</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC139'><br/></div><div class='line' id='LC140'><span class="cm">/*************************************************************************</span></div><div class='line' id='LC141'><span class="cm">**  communication profile object dictionary structure</span></div><div class='line' id='LC142'><span class="cm">*************************************************************************/</span></div><div class='line' id='LC143'><span class="n">t_general_od</span> <span class="n">ROMCONST</span>    <span class="n">USR_as_GeneralDeviceObj</span><span class="p">[]</span><span class="o">=</span></div><div class='line' id='LC144'><span class="cm">/* index | sidx | attrib | datatype | length | default | actual | (range) | callback  */</span></div><div class='line' id='LC145'><span class="cm">/* depending on define OBD_CHECK_OBJ_RANGE the range entry must be removed / added    */</span></div><div class='line' id='LC146'><span class="cm">/* from/to this structure. Your compiler may report wrong pointerconversion.          */</span></div><div class='line' id='LC147'><span class="p">{</span></div><div class='line' id='LC148'>&nbsp;<span class="cm">/*Device type*/</span></div><div class='line' id='LC149'>&nbsp;<span class="p">{</span><span class="mh">0x1000</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="n">ATTR_CONST</span><span class="p">,</span><span class="n">UNSIGNED32</span><span class="p">,</span><span class="mi">4</span><span class="p">,(</span><span class="n">UINT8</span> <span class="n">ROMCONST</span>    <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">d_DeviceTyp</span><span class="p">,</span><span class="nb">NULL</span><span class="p">,</span><span class="n">RANGE_NULL</span>  <span class="n">NULLCLBK</span><span class="p">},</span></div><div class='line' id='LC150'><br/></div><div class='line' id='LC151'>&nbsp;<span class="cm">/*Error Register*/</span></div><div class='line' id='LC152'>&nbsp;<span class="p">{</span><span class="mh">0x1001</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="n">ATTR_RO</span><span class="p">,</span><span class="n">UNSIGNED8</span><span class="p">,</span><span class="mi">1</span><span class="p">,(</span><span class="n">UINT8</span> <span class="n">ROMCONST</span>    <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">d_ErrorReg</span><span class="p">,(</span><span class="n">UINT8</span> <span class="n">XDATA</span>  <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">USR_s_AComObj</span><span class="p">.</span><span class="n">ErrorReg</span><span class="p">,</span><span class="n">RANGE_NULL</span>  <span class="n">NULLCLBK</span><span class="p">},</span></div><div class='line' id='LC153'><br/></div><div class='line' id='LC154'><span class="cp"> /* 0x1003 automatically created if emergency support is activated */</span></div><div class='line' id='LC155'><span class="cp">#ifdef SYNC_OBJ</span></div><div class='line' id='LC156'>&nbsp;<span class="cm">/*COB_ID SYNC*/</span></div><div class='line' id='LC157'>&nbsp;<span class="p">{</span><span class="mh">0x1005</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="n">ATTR_RW</span><span class="p">,</span><span class="n">UNSIGNED32</span><span class="p">,</span><span class="mi">4</span><span class="p">,(</span><span class="n">UINT8</span> <span class="n">ROMCONST</span>    <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">d_SyncId</span><span class="p">,(</span><span class="n">UINT8</span> <span class="n">XDATA</span>  <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">USR_s_AComObj</span><span class="p">.</span><span class="n">SyncId</span><span class="p">,</span><span class="n">RANGE_NULL</span>  <span class="n">NULLCLBK</span><span class="p">},</span></div><div class='line' id='LC158'><span class="cp">#endif</span></div><div class='line' id='LC159'><br/></div><div class='line' id='LC160'>&nbsp;<span class="cm">/*manufacturer device name */</span></div><div class='line' id='LC161'>&nbsp;<span class="p">{</span><span class="mh">0x1008</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="n">ATTR_CONST</span><span class="p">,</span><span class="n">VISIBLE_STRING</span><span class="p">,</span><span class="k">sizeof</span><span class="p">(</span><span class="n">MAN_DEV_Name</span><span class="p">),</span><span class="n">MAN_DEV_Name</span><span class="p">,</span><span class="nb">NULL</span><span class="p">,</span><span class="n">RANGE_NULL</span>  <span class="n">NULLCLBK</span><span class="p">},</span></div><div class='line' id='LC162'><br/></div><div class='line' id='LC163'>&nbsp;<span class="cm">/*manufacturer hardware version*/</span></div><div class='line' id='LC164'>&nbsp;<span class="p">{</span><span class="mh">0x1009</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="n">ATTR_CONST</span><span class="p">,</span><span class="n">VISIBLE_STRING</span><span class="p">,</span><span class="k">sizeof</span><span class="p">(</span><span class="n">MAN_HW_Ver</span><span class="p">),</span><span class="n">MAN_HW_Ver</span><span class="p">,</span><span class="nb">NULL</span><span class="p">,</span><span class="n">RANGE_NULL</span>  <span class="n">NULLCLBK</span><span class="p">},</span></div><div class='line' id='LC165'>&nbsp;</div><div class='line' id='LC166'>&nbsp;<span class="cm">/*manufacturer software version*/</span></div><div class='line' id='LC167'>&nbsp;<span class="p">{</span><span class="mh">0x100A</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="n">ATTR_CONST</span><span class="p">,</span><span class="n">VISIBLE_STRING</span><span class="p">,</span><span class="k">sizeof</span><span class="p">(</span><span class="n">MAN_SW_Ver</span><span class="p">),</span><span class="n">MAN_SW_Ver</span><span class="p">,</span><span class="nb">NULL</span><span class="p">,</span><span class="n">RANGE_NULL</span>  <span class="n">NULLCLBK</span><span class="p">},</span></div><div class='line' id='LC168'><span class="cp">  </span></div><div class='line' id='LC169'><span class="cp">#ifdef NODE_GUARDING</span></div><div class='line' id='LC170'>&nbsp;<span class="cm">/*guard_time*/</span></div><div class='line' id='LC171'>&nbsp;<span class="p">{</span><span class="mh">0x100C</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="n">ATTR_RW</span><span class="p">,</span><span class="n">UNSIGNED16</span><span class="p">,</span><span class="mi">2</span><span class="p">,(</span><span class="n">UINT8</span>  <span class="n">ROMCONST</span>   <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">d_GuardTime</span><span class="p">,(</span><span class="n">UINT8</span>   <span class="n">XDATA</span> <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">USR_s_AComObj</span><span class="p">.</span><span class="n">GuardTime</span><span class="p">,</span><span class="n">RANGE_NULL</span>  <span class="n">NULLCLBK</span><span class="p">},</span></div><div class='line' id='LC172'><br/></div><div class='line' id='LC173'>&nbsp;<span class="cm">/*life time factor*/</span></div><div class='line' id='LC174'>&nbsp;<span class="p">{</span><span class="mh">0x100D</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="n">ATTR_RW</span><span class="p">,</span><span class="n">UNSIGNED8</span><span class="p">,</span><span class="mi">1</span><span class="p">,(</span><span class="n">UINT8</span>  <span class="n">ROMCONST</span>    <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">d_LifeTime</span><span class="p">,(</span><span class="n">UINT8</span>   <span class="n">XDATA</span><span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">USR_s_AComObj</span><span class="p">.</span><span class="n">LifeTime</span><span class="p">,</span><span class="n">RANGE_NULL</span>  <span class="n">NULLCLBK</span><span class="p">},</span></div><div class='line' id='LC175'><span class="cp">#endif</span></div><div class='line' id='LC176'><br/></div><div class='line' id='LC177'><span class="cp">#ifdef RE_STORE_VALUE</span></div><div class='line' id='LC178'>&nbsp;<span class="p">{</span><span class="mh">0x1010</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="n">ATTR_RO</span><span class="p">,</span><span class="n">UNSIGNED8</span><span class="p">,</span> <span class="mi">1</span><span class="p">,(</span><span class="n">UINT8</span>  <span class="n">ROMCONST</span>    <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">d_StorePara_00</span><span class="p">,</span><span class="nb">NULL</span>             <span class="p">,</span><span class="n">RANGE_NULL</span>  <span class="n">NULLCLBK</span><span class="p">},</span></div><div class='line' id='LC179'>&nbsp;<span class="p">{</span><span class="mh">0x1010</span><span class="p">,</span><span class="mi">1</span><span class="p">,</span><span class="n">ATTR_RW</span><span class="p">,</span><span class="n">UNSIGNED32</span><span class="p">,</span><span class="mi">4</span><span class="p">,(</span><span class="n">UINT8</span>  <span class="n">ROMCONST</span>    <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">d_StorePara_01</span><span class="p">,(</span><span class="n">UINT8</span>   <span class="n">XDATA</span><span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">USR_s_AComObj</span><span class="p">.</span><span class="n">StorePara_01</span><span class="p">,</span><span class="n">RANGE_NULL</span>  <span class="n">USR_TstSavePara</span><span class="p">},</span></div><div class='line' id='LC180'><br/></div><div class='line' id='LC181'>&nbsp;<span class="p">{</span><span class="mh">0x1011</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="n">ATTR_RO</span><span class="p">,</span><span class="n">UNSIGNED8</span><span class="p">,</span> <span class="mi">1</span><span class="p">,(</span><span class="n">UINT8</span>  <span class="n">ROMCONST</span>    <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">d_ReStorePara_00</span><span class="p">,</span><span class="nb">NULL</span>           <span class="p">,</span><span class="n">RANGE_NULL</span>  <span class="n">NULLCLBK</span><span class="p">},</span></div><div class='line' id='LC182'>&nbsp;<span class="p">{</span><span class="mh">0x1011</span><span class="p">,</span><span class="mi">1</span><span class="p">,</span><span class="n">ATTR_RW</span><span class="p">,</span><span class="n">UNSIGNED32</span><span class="p">,</span><span class="mi">4</span><span class="p">,(</span><span class="n">UINT8</span>  <span class="n">ROMCONST</span>    <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">d_ReStorePara_01</span><span class="p">,(</span><span class="n">UINT8</span>   <span class="n">XDATA</span><span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">USR_s_AComObj</span><span class="p">.</span><span class="n">ReStorePara_01</span><span class="p">,</span><span class="n">RANGE_NULL</span>  <span class="n">USR_TstLoadPara</span><span class="p">},</span></div><div class='line' id='LC183'><span class="cp">#endif</span></div><div class='line' id='LC184'><br/></div><div class='line' id='LC185'><span class="cp"> /* time stamp id */</span></div><div class='line' id='LC186'><span class="cp">#if (TIME_OBJ != TIME_NOT)</span></div><div class='line' id='LC187'>&nbsp;<span class="p">{</span><span class="mh">0x1012</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="n">ATTR_RW</span><span class="p">,</span><span class="n">UNSIGNED32</span><span class="p">,</span><span class="mi">4</span><span class="p">,(</span><span class="n">UINT8</span> <span class="n">ROMCONST</span>    <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">d_TimeStampId</span><span class="p">,(</span><span class="n">UINT8</span>   <span class="n">XDATA</span> <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">USR_s_AComObj</span><span class="p">.</span><span class="n">TimeStampId</span> <span class="p">,</span><span class="n">RANGE_NULL</span>  <span class="n">NULLCLBK</span><span class="p">},</span></div><div class='line' id='LC188'><span class="cp">#endif</span></div><div class='line' id='LC189'><br/></div><div class='line' id='LC190'><span class="cp"> /* emcy id */</span></div><div class='line' id='LC191'><span class="cp">#ifdef EMCY_OBJ</span></div><div class='line' id='LC192'>&nbsp;<span class="p">{</span><span class="mh">0x1014</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="n">ATTR_RW</span><span class="p">,</span><span class="n">UNSIGNED32</span><span class="p">,</span><span class="mi">4</span><span class="p">,(</span><span class="n">UINT8</span> <span class="n">ROMCONST</span>    <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">d_EmergencyId</span><span class="p">,(</span><span class="n">UINT8</span>   <span class="n">XDATA</span><span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">USR_s_AComObj</span><span class="p">.</span><span class="n">EmergencyId</span> <span class="p">,</span><span class="n">RANGE_NULL</span>  <span class="n">NULLCLBK</span><span class="p">},</span></div><div class='line' id='LC193'><span class="cp"> #ifdef EMCY_INHIBIT</span></div><div class='line' id='LC194'>&nbsp;<span class="p">{</span><span class="mh">0x1015</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="n">ATTR_RW</span><span class="p">,</span><span class="n">UNSIGNED16</span><span class="p">,</span><span class="mi">2</span><span class="p">,(</span><span class="n">UINT8</span> <span class="n">ROMCONST</span>    <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">d_w_Zero</span><span class="p">,(</span><span class="n">UINT8</span>   <span class="n">XDATA</span><span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">USR_s_AComObj</span><span class="p">.</span><span class="n">EmergencyInhibitTime</span><span class="p">,</span><span class="n">RANGE_NULL</span>  <span class="n">NULLCLBK</span><span class="p">},</span></div><div class='line' id='LC195'><span class="cp"> #endif</span></div><div class='line' id='LC196'><span class="cp">#endif</span></div><div class='line' id='LC197'><br/></div><div class='line' id='LC198'><span class="cp">#ifdef HEARTBEAT</span></div><div class='line' id='LC199'>&nbsp;<span class="p">{</span><span class="mh">0x1017</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="n">ATTR_RW</span><span class="p">,</span><span class="n">UNSIGNED16</span><span class="p">,</span><span class="mi">2</span><span class="p">,(</span><span class="n">UINT8</span> <span class="n">ROMCONST</span>    <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">d_HeartbeatTime</span><span class="p">,(</span><span class="n">UINT8</span>   <span class="n">XDATA</span><span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">USR_s_AComObj</span><span class="p">.</span><span class="n">COP_Heartbeat_Timer_Reload</span> <span class="p">,</span><span class="n">RANGE_NULL</span>  <span class="n">NULLCLBK</span><span class="p">},</span></div><div class='line' id='LC200'><span class="cp">#endif</span></div><div class='line' id='LC201'>&nbsp;</div><div class='line' id='LC202'>&nbsp;<span class="p">{</span><span class="mh">0x1018</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="n">ATTR_RO</span><span class="p">,</span><span class="n">UNSIGNED8</span><span class="p">,</span> <span class="mi">1</span><span class="p">,(</span><span class="n">UINT8</span> <span class="n">ROMCONST</span>    <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">d_Identity_00</span>     <span class="p">,</span><span class="nb">NULL</span><span class="p">,</span>                             <span class="n">RANGE_NULL</span>  <span class="n">NULLCLBK</span><span class="p">},</span></div><div class='line' id='LC203'>&nbsp;<span class="p">{</span><span class="mh">0x1018</span><span class="p">,</span><span class="mi">1</span><span class="p">,</span><span class="n">ATTR_RO</span><span class="p">,</span><span class="n">UNSIGNED32</span><span class="p">,</span><span class="mi">4</span><span class="p">,(</span><span class="n">UINT8</span> <span class="n">ROMCONST</span>    <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">d_Vendor_ID</span>       <span class="p">,</span><span class="nb">NULL</span><span class="p">,</span>                             <span class="n">RANGE_NULL</span>  <span class="n">NULLCLBK</span><span class="p">},</span></div><div class='line' id='LC204'>&nbsp;<span class="p">{</span><span class="mh">0x1018</span><span class="p">,</span><span class="mi">2</span><span class="p">,</span><span class="n">ATTR_RO</span><span class="p">,</span><span class="n">UNSIGNED32</span><span class="p">,</span><span class="mi">4</span><span class="p">,(</span><span class="n">UINT8</span> <span class="n">ROMCONST</span>    <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">d_Product_code</span>    <span class="p">,</span><span class="nb">NULL</span><span class="p">,</span>                             <span class="n">RANGE_NULL</span>  <span class="n">NULLCLBK</span><span class="p">},</span></div><div class='line' id='LC205'>&nbsp;<span class="p">{</span><span class="mh">0x1018</span><span class="p">,</span><span class="mi">3</span><span class="p">,</span><span class="n">ATTR_RO</span><span class="p">,</span><span class="n">UNSIGNED32</span><span class="p">,</span><span class="mi">4</span><span class="p">,(</span><span class="n">UINT8</span> <span class="n">ROMCONST</span>    <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">d_Revision_number</span> <span class="p">,</span><span class="nb">NULL</span><span class="p">,</span>                             <span class="n">RANGE_NULL</span>  <span class="n">NULLCLBK</span><span class="p">},</span></div><div class='line' id='LC206'>&nbsp;<span class="p">{</span><span class="mh">0x1018</span><span class="p">,</span><span class="mi">4</span><span class="p">,</span><span class="n">ATTR_RO</span><span class="p">,</span><span class="n">UNSIGNED32</span><span class="p">,</span><span class="mi">4</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">,</span>                                   <span class="p">(</span><span class="n">UINT8</span> <span class="n">XDATA</span> <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">USR_dw_SerialNum</span><span class="p">,</span> <span class="n">RANGE_NULL</span>  <span class="n">NULLCLBK</span><span class="p">},</span></div><div class='line' id='LC207'><br/></div><div class='line' id='LC208'><span class="cp">#if (NMS_ENABLE_ERROR_BEHAVIOR == NMS_k_ERROR_BEHAVIOR_1029)</span></div><div class='line' id='LC209'>&nbsp;<span class="p">{</span><span class="mh">0x1029</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="n">ATTR_RO</span><span class="p">,</span><span class="n">UNSIGNED8</span><span class="p">,</span> <span class="mi">1</span><span class="p">,(</span><span class="n">UINT8</span> <span class="n">ROMCONST</span>    <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">d_b_ErrorBehavior_00</span><span class="p">,</span><span class="nb">NULL</span>             <span class="p">,</span><span class="n">RANGE_NULL</span>  <span class="n">NULLCLBK</span><span class="p">},</span></div><div class='line' id='LC210'>&nbsp;<span class="p">{</span><span class="mh">0x1029</span><span class="p">,</span><span class="mi">1</span><span class="p">,</span><span class="n">ATTR_RW</span><span class="p">,</span><span class="n">UNSIGNED8</span><span class="p">,</span> <span class="mi">1</span><span class="p">,(</span><span class="n">UINT8</span> <span class="n">ROMCONST</span>    <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">d_b_ErrorBehaviorValue</span><span class="p">,(</span><span class="n">UINT8</span>   <span class="n">XDATA</span><span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">USR_s_AComObj</span><span class="p">.</span><span class="n">ab_ErrorBehavior</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span> <span class="p">,</span><span class="n">RANGE_NULL</span>  <span class="n">NULLCLBK</span><span class="p">},</span></div><div class='line' id='LC211'><span class="cp"> #if(NMS_k_ERROR_BEHAVIOR_NUM_CLASSES &gt; 1)</span></div><div class='line' id='LC212'>&nbsp;<span class="p">{</span><span class="mh">0x1029</span><span class="p">,</span><span class="mi">2</span><span class="p">,</span><span class="n">ATTR_RW</span><span class="p">,</span><span class="n">UNSIGNED8</span><span class="p">,</span> <span class="mi">1</span><span class="p">,(</span><span class="n">UINT8</span> <span class="n">ROMCONST</span>    <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">d_b_ErrorBehaviorValue</span><span class="p">,(</span><span class="n">UINT8</span>   <span class="n">XDATA</span><span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">USR_s_AComObj</span><span class="p">.</span><span class="n">ab_ErrorBehavior</span><span class="p">[</span><span class="mi">1</span><span class="p">]</span> <span class="p">,</span><span class="n">RANGE_NULL</span>  <span class="n">NULLCLBK</span><span class="p">},</span></div><div class='line' id='LC213'><span class="cp"> #endif</span></div><div class='line' id='LC214'><span class="cp"> #if(NMS_k_ERROR_BEHAVIOR_NUM_CLASSES &gt; 2)</span></div><div class='line' id='LC215'>&nbsp;<span class="p">{</span><span class="mh">0x1029</span><span class="p">,</span><span class="mi">3</span><span class="p">,</span><span class="n">ATTR_RW</span><span class="p">,</span><span class="n">UNSIGNED8</span><span class="p">,</span> <span class="mi">1</span><span class="p">,(</span><span class="n">UINT8</span> <span class="n">ROMCONST</span>    <span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">d_b_ErrorBehaviorValue</span><span class="p">,(</span><span class="n">UINT8</span>   <span class="n">XDATA</span><span class="o">*</span><span class="p">)</span><span class="o">&amp;</span><span class="n">USR_s_AComObj</span><span class="p">.</span><span class="n">ab_ErrorBehavior</span><span class="p">[</span><span class="mi">2</span><span class="p">]</span> <span class="p">,</span><span class="n">RANGE_NULL</span>  <span class="n">NULLCLBK</span><span class="p">},</span></div><div class='line' id='LC216'><span class="cp"> #endif</span></div><div class='line' id='LC217'><span class="cp">#endif</span></div><div class='line' id='LC218'>&nbsp;<span class="p">{</span><span class="n">OBD_k_OD_INDEX_END</span><span class="p">,</span><span class="mh">0xff</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="nb">NULL</span><span class="p">,</span><span class="nb">NULL</span><span class="p">,</span><span class="n">RANGE_NULL</span>  <span class="n">NULLCLBK</span><span class="p">}</span>  <span class="p">};</span></div><div class='line' id='LC219'><br/></div><div class='line' id='LC220'><span class="cm">/*************************************************************************</span></div><div class='line' id='LC221'><span class="cm">** general communication parameter</span></div><div class='line' id='LC222'><span class="cm">*************************************************************************/</span></div><div class='line' id='LC223'><span class="n">USR_t_ActObjCom</span> <span class="n">XDATA</span>   <span class="n">USR_s_AComObj</span><span class="p">;</span></div><div class='line' id='LC224'><br/></div><div class='line' id='LC225'><span class="cm">/*************************************************************************</span></div><div class='line' id='LC226'><span class="cm">** SDO Parameter object dictionary structure</span></div><div class='line' id='LC227'><span class="cm">*************************************************************************/</span></div><div class='line' id='LC228'><br/></div><div class='line' id='LC229'><span class="n">t_sdo_para</span> <span class="n">ROMCONST</span>    <span class="n">USR_as_SSDOParameterObj</span><span class="p">[</span><span class="n">SDO_k_SSDOCNT</span><span class="p">]</span> <span class="o">=</span></div><div class='line' id='LC230'><span class="p">{</span></div><div class='line' id='LC231'><span class="cm">/*************************************************************************</span></div><div class='line' id='LC232'><span class="cm">** Server SDO Parameter</span></div><div class='line' id='LC233'><span class="cm">** In the first Server SDO the Tx/Rx COB_ID&#39;s depend on the node number.</span></div><div class='line' id='LC234'><span class="cm">** So the entries below are not relevant for the first server SDO. </span></div><div class='line' id='LC235'><span class="cm">** Entries of COB-IDs for SSDOs (except first) should be &quot;not valid&quot;,</span></div><div class='line' id='LC236'><span class="cm">** Bit 31 = 1 (according CiA DS301)</span></div><div class='line' id='LC237'><span class="cm">*************************************************************************/</span></div><div class='line' id='LC238'><br/></div><div class='line' id='LC239'><span class="cm">/* </span></div><div class='line' id='LC240'><span class="cm">**  index  |COB-ID      |COB-ID </span></div><div class='line' id='LC241'><span class="cm">**         |Client-&gt;    |Server-&gt; </span></div><div class='line' id='LC242'><span class="cm">**         |Server (rx) |Client (tx)</span></div><div class='line' id='LC243'><span class="cm">*/</span></div><div class='line' id='LC244'>&nbsp;&nbsp;<span class="p">{</span><span class="mh">0x1200</span>  <span class="p">,</span><span class="mi">0</span>           <span class="p">,</span><span class="mi">0</span>          <span class="p">}</span></div><div class='line' id='LC245'>&nbsp;<span class="p">};</span></div><div class='line' id='LC246'><br/></div><div class='line' id='LC247'><span class="cm">/*************************************************************************</span></div><div class='line' id='LC248'><span class="cm">** Client SDO Parameter</span></div><div class='line' id='LC249'><span class="cm">*************************************************************************/</span></div><div class='line' id='LC250'><br/></div><div class='line' id='LC251'><span class="cp">#if (SDO_k_CSDOCNT &gt; 0)</span></div><div class='line' id='LC252'><span class="n">t_sdo_para</span> <span class="n">ROMCONST</span>    <span class="n">USR_as_CSDOParameterObj</span><span class="p">[</span><span class="n">SDO_k_CSDOCNT</span><span class="p">]</span> <span class="o">=</span></div><div class='line' id='LC253'><span class="p">{</span></div><div class='line' id='LC254'><span class="cm">/* </span></div><div class='line' id='LC255'><span class="cm">**  index  |COB-ID      |COB-ID </span></div><div class='line' id='LC256'><span class="cm">**         |Client-&gt;    |Server-&gt; </span></div><div class='line' id='LC257'><span class="cm">**         |Server (tx) |Client (rx)</span></div><div class='line' id='LC258'><span class="cm">*/</span></div><div class='line' id='LC259'>&nbsp;<span class="p">{</span><span class="mh">0x1280</span>  <span class="p">,</span><span class="mh">0x80000000</span>  <span class="p">,</span><span class="mh">0x80000000</span><span class="p">}</span></div><div class='line' id='LC260'>&nbsp;<span class="p">};</span></div><div class='line' id='LC261'><span class="cp">#endif</span></div><div class='line' id='LC262'><br/></div><div class='line' id='LC263'><br/></div><div class='line' id='LC264'><span class="cm">/**********************************************************************</span></div><div class='line' id='LC265'><span class="cm">** default communication parameter of PDOs</span></div><div class='line' id='LC266'><span class="cm">**********************************************************************/</span></div><div class='line' id='LC267'><br/></div><div class='line' id='LC268'><br/></div><div class='line' id='LC269'><span class="cp">/* definition of communication parameter of PDOs*/</span></div><div class='line' id='LC270'><span class="cp">#if (PDO_k_RXPDODIR_SIZE != 0)</span></div><div class='line' id='LC271'><span class="n">t_com_para</span> <span class="n">ROMCONST</span>    <span class="n">USR_as_RxPDOCommunicationObj</span><span class="p">[</span><span class="n">PDO_k_RXPDODIR_SIZE</span><span class="p">]</span><span class="o">=</span></div><div class='line' id='LC272'><span class="p">{</span></div><div class='line' id='LC273'>&nbsp;&nbsp;<span class="cm">/*receive PDO communication parameter */</span></div><div class='line' id='LC274'>&nbsp;&nbsp;<span class="cm">/*  index, default id, number of entries, Transmission Type, Inhibit Time (not used by Rx-PDOs) Event_Timer */</span></div><div class='line' id='LC275'>&nbsp;&nbsp;<span class="cm">/* default id: 0xYxxx   Y-Bit 3: 0 = PDO Enabled,  1 = PDO Disabled  */</span></div><div class='line' id='LC276'>&nbsp;&nbsp;<span class="cm">/*                      Y-Bit 2: 0 = add Node-ID,  1 = use ID direct */</span></div><div class='line' id='LC277'>&nbsp;&nbsp;<span class="cm">/*                      Y-Bit 0..1: reserved{0}                      */</span></div><div class='line' id='LC278'>&nbsp;&nbsp;<span class="cm">/*                      xxx =&gt; COB-ID                                */</span></div><div class='line' id='LC279'>&nbsp;&nbsp;<span class="p">{</span><span class="mh">0x1400</span><span class="p">,</span> <span class="mh">0x0200</span><span class="p">,</span> <span class="n">RX_COM_NUMBER_OF_ENTRIES</span><span class="p">,</span> <span class="mi">255</span><span class="p">,</span> <span class="mi">0</span> <span class="n">PDO_EVENT_TIME</span><span class="p">}</span></div><div class='line' id='LC280'><span class="cp"> #if (PDO_k_RXPDODIR_SIZE &gt; 1)</span></div><div class='line' id='LC281'>&nbsp;<span class="p">,{</span><span class="mh">0x1401</span><span class="p">,</span> <span class="mh">0x0300</span><span class="p">,</span> <span class="n">RX_COM_NUMBER_OF_ENTRIES</span><span class="p">,</span> <span class="mi">255</span><span class="p">,</span> <span class="mi">0</span> <span class="n">PDO_EVENT_TIME</span><span class="p">}</span> </div><div class='line' id='LC282'>&nbsp;<span class="err">#</span><span class="n">endif</span></div><div class='line' id='LC283'><span class="cp"> #if (PDO_k_RXPDODIR_SIZE &gt; 2)</span></div><div class='line' id='LC284'>&nbsp;<span class="p">,{</span><span class="mh">0x1402</span><span class="p">,</span> <span class="mh">0x0400</span><span class="p">,</span> <span class="n">RX_COM_NUMBER_OF_ENTRIES</span><span class="p">,</span> <span class="mi">255</span><span class="p">,</span> <span class="mi">0</span> <span class="n">PDO_EVENT_TIME</span><span class="p">}</span></div><div class='line' id='LC285'><span class="cp"> #endif</span></div><div class='line' id='LC286'><span class="cp"> #if (PDO_k_RXPDODIR_SIZE &gt; 3)</span></div><div class='line' id='LC287'>&nbsp;<span class="p">,{</span><span class="mh">0x1403</span><span class="p">,</span> <span class="mh">0x0500</span><span class="p">,</span> <span class="n">RX_COM_NUMBER_OF_ENTRIES</span><span class="p">,</span> <span class="mi">255</span><span class="p">,</span> <span class="mi">0</span> <span class="n">PDO_EVENT_TIME</span><span class="p">}</span></div><div class='line' id='LC288'><span class="cp"> #endif</span></div><div class='line' id='LC289'><span class="p">};</span></div><div class='line' id='LC290'><br/></div><div class='line' id='LC291'><span class="cp">#endif </span><span class="cm">/* #if (PDO_k_RXPDODIR_SIZE != 0) */</span><span class="cp"></span></div><div class='line' id='LC292'><br/></div><div class='line' id='LC293'><span class="cp">#if (PDO_k_TXPDODIR_SIZE != 0)</span></div><div class='line' id='LC294'><span class="n">t_com_para</span> <span class="n">ROMCONST</span>    <span class="n">USR_as_TxPDOCommunicationObj</span><span class="p">[</span><span class="n">PDO_k_TXPDODIR_SIZE</span><span class="p">]</span><span class="o">=</span></div><div class='line' id='LC295'>&nbsp;<span class="p">{</span></div><div class='line' id='LC296'>&nbsp;&nbsp;<span class="cm">/*transmit PDO communication parameter */</span></div><div class='line' id='LC297'>&nbsp;&nbsp;<span class="cm">/*  index, default id, number of entries, Transmission Type, Inhibit Time, Event_Timer */</span></div><div class='line' id='LC298'>&nbsp;&nbsp;<span class="cm">/* encoding of default id, see RxPDOCommunicationObj[] above */</span></div><div class='line' id='LC299'>&nbsp;&nbsp;<span class="p">{</span><span class="mh">0x1800</span><span class="p">,</span> <span class="mh">0x0180</span><span class="p">,</span> <span class="n">TX_COM_NUMBER_OF_ENTRIES</span><span class="p">,</span> <span class="mi">255</span><span class="p">,</span> <span class="mi">0</span> <span class="n">PDO_EVENT_TIME</span><span class="p">}</span>				<span class="c1">// 20ms</span></div><div class='line' id='LC300'><span class="cp">#if (PDO_k_TXPDODIR_SIZE &gt; 1)</span></div><div class='line' id='LC301'>&nbsp;<span class="p">,{</span><span class="mh">0x1801</span><span class="p">,</span> <span class="mh">0x0280</span><span class="p">,</span> <span class="n">TX_COM_NUMBER_OF_ENTRIES</span><span class="p">,</span> <span class="mi">255</span><span class="p">,</span> <span class="mi">0</span> <span class="n">PDO_EVENT_TIME</span><span class="p">}</span>				<span class="c1">//150ms pour ana</span></div><div class='line' id='LC302'><span class="cp">#endif</span></div><div class='line' id='LC303'><span class="cp">#if (PDO_k_TXPDODIR_SIZE &gt; 2)</span></div><div class='line' id='LC304'>&nbsp;<span class="p">,{</span><span class="mh">0x1802</span><span class="p">,</span> <span class="mh">0x0380</span><span class="p">,</span> <span class="n">TX_COM_NUMBER_OF_ENTRIES</span><span class="p">,</span> <span class="mi">255</span><span class="p">,</span> <span class="mi">0</span> <span class="n">PDO_EVENT_TIME</span><span class="p">}</span></div><div class='line' id='LC305'><span class="cp">#endif</span></div><div class='line' id='LC306'><span class="cp">#if (PDO_k_TXPDODIR_SIZE &gt; 3)</span></div><div class='line' id='LC307'>&nbsp;<span class="p">,{</span><span class="mh">0x1803</span><span class="p">,</span> <span class="mh">0x0480</span><span class="p">,</span> <span class="n">TX_COM_NUMBER_OF_ENTRIES</span><span class="p">,</span> <span class="mi">255</span><span class="p">,</span> <span class="mi">0</span> <span class="n">PDO_EVENT_TIME</span><span class="p">}</span></div><div class='line' id='LC308'><span class="cp">#endif</span></div><div class='line' id='LC309'><span class="p">};</span></div><div class='line' id='LC310'><br/></div><div class='line' id='LC311'><span class="cp">#endif </span><span class="cm">/* #if (PDO_k_TXPDODIR_SIZE != 0) */</span><span class="cp"></span></div><div class='line' id='LC312'><br/></div><div class='line' id='LC313'><br/></div><div class='line' id='LC314'><span class="cm">/**********************************************************************</span></div><div class='line' id='LC315'><span class="cm">** mapping parameter of PDOs</span></div><div class='line' id='LC316'><span class="cm">**********************************************************************/</span></div><div class='line' id='LC317'><br/></div><div class='line' id='LC318'><span class="cp">/* definition of mappingparameter of RxPDOs*/</span></div><div class='line' id='LC319'><span class="cp">#if (PDO_k_RXPDODIR_SIZE != 0)</span></div><div class='line' id='LC320'><span class="n">t_map_para</span> <span class="n">ROMCONST</span>    <span class="n">USR_as_RxPDOMappingObj</span><span class="p">[</span><span class="n">PDO_k_RXPDODIR_SIZE</span><span class="p">]</span><span class="o">=</span></div><div class='line' id='LC321'><span class="p">{</span></div><div class='line' id='LC322'><span class="cm">/* </span></div><div class='line' id='LC323'><span class="cm">** index | number of entries (subindex zero) |  Mapping entries 1..8 | Callback &gt;Default Mapping&lt; </span></div><div class='line' id='LC324'><span class="cm">*/</span></div><div class='line' id='LC325'>&nbsp;&nbsp;<span class="p">{</span><span class="mh">0x1600</span><span class="p">,</span><span class="mi">4</span><span class="p">,{</span><span class="mh">0x62000108UL</span><span class="p">,</span><span class="mh">0x62000208UL</span><span class="p">,</span><span class="mh">0x62000108UL</span><span class="p">,</span><span class="mh">0x62000408UL</span><span class="p">,</span><span class="mh">0x62000508UL</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">},</span><span class="n">DEFAULT_CALLBACK</span><span class="p">}</span> <span class="c1">//5 bytes</span></div><div class='line' id='LC326'><span class="cp">#if (PDO_k_RXPDODIR_SIZE &gt; 1)</span></div><div class='line' id='LC327'>&nbsp;<span class="p">,{</span><span class="mh">0x1601</span><span class="p">,</span><span class="mi">2</span><span class="p">,{</span><span class="mh">0x64110110UL</span><span class="p">,</span><span class="mh">0x64110210UL</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">},</span><span class="n">DEFAULT_CALLBACK</span><span class="p">}</span> 									<span class="c1">// 2*16 bits</span></div><div class='line' id='LC328'><span class="cp">#endif</span></div><div class='line' id='LC329'><span class="cp">#if (PDO_k_RXPDODIR_SIZE &gt; 2)</span></div><div class='line' id='LC330'>&nbsp;<span class="p">,{</span><span class="mh">0x1602</span><span class="p">,</span><span class="mi">2</span><span class="p">,{</span><span class="mh">0x62000108UL</span><span class="p">,</span><span class="mh">0x62000208UL</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">},</span><span class="n">DEFAULT_CALLBACK</span><span class="p">}</span> </div><div class='line' id='LC331'><span class="cp">#endif</span></div><div class='line' id='LC332'><span class="cp">#if (PDO_k_RXPDODIR_SIZE &gt; 3)</span></div><div class='line' id='LC333'>&nbsp;<span class="p">,{</span><span class="mh">0x1603</span><span class="p">,</span><span class="mi">2</span><span class="p">,{</span><span class="mh">0x64110110UL</span><span class="p">,</span><span class="mh">0x64110210UL</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">},</span><span class="n">DEFAULT_CALLBACK</span><span class="p">}</span> </div><div class='line' id='LC334'><span class="cp">#endif</span></div><div class='line' id='LC335'>&nbsp;&nbsp;<span class="p">};</span></div><div class='line' id='LC336'><br/></div><div class='line' id='LC337'><br/></div><div class='line' id='LC338'><span class="cp">#endif </span><span class="cm">/* #if (PDO_k_RXPDODIR_SIZE != 0) */</span><span class="cp"></span></div><div class='line' id='LC339'><br/></div><div class='line' id='LC340'><br/></div><div class='line' id='LC341'><span class="cp">/* definition of mappingparameter of TxPDOs*/</span></div><div class='line' id='LC342'><span class="cp">#if (PDO_k_TXPDODIR_SIZE != 0)</span></div><div class='line' id='LC343'><span class="n">t_map_para</span> <span class="n">ROMCONST</span>    <span class="n">USR_as_TxPDOMappingObj</span><span class="p">[</span><span class="n">PDO_k_TXPDODIR_SIZE</span><span class="p">]</span><span class="o">=</span></div><div class='line' id='LC344'><span class="p">{</span></div><div class='line' id='LC345'><span class="cm">/* </span></div><div class='line' id='LC346'><span class="cm">** index | number of entries (subindex zero) |  Mapping entries 1..8 | Callback (for further extensions </span></div><div class='line' id='LC347'><span class="cm">**                                                                     and when default Mapping will be </span></div><div class='line' id='LC348'><span class="cm">**                                                                     used a Dummy Callback function </span></div><div class='line' id='LC349'><span class="cm">**                                                                     must be specified</span></div><div class='line' id='LC350'><span class="cm">*/</span></div><div class='line' id='LC351'>&nbsp;&nbsp;<span class="p">{</span><span class="mh">0x1A00</span><span class="p">,</span><span class="mi">2</span><span class="p">,{</span><span class="mh">0x60000108UL</span><span class="p">,</span><span class="mh">0x60000208UL</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">},</span><span class="n">NULLCLBK</span><span class="p">}</span> </div><div class='line' id='LC352'><span class="cp">#if (PDO_k_TXPDODIR_SIZE &gt; 1)</span></div><div class='line' id='LC353'>&nbsp;<span class="p">,{</span><span class="mh">0x1A01</span><span class="p">,</span><span class="mi">2</span><span class="p">,{</span><span class="mh">0x64010110UL</span><span class="p">,</span><span class="mh">0x64010210UL</span><span class="p">,</span><span class="mh">0x64010310UL</span><span class="p">,</span><span class="mh">0x64010410UL</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">},</span><span class="n">NULLCLBK</span><span class="p">}</span> </div><div class='line' id='LC354'><span class="cp">#endif</span></div><div class='line' id='LC355'><span class="cp">#if (PDO_k_TXPDODIR_SIZE &gt; 2)</span></div><div class='line' id='LC356'>&nbsp;<span class="p">,{</span><span class="mh">0x1A02</span><span class="p">,</span><span class="mi">2</span><span class="p">,{</span><span class="mh">0x60000108UL</span><span class="p">,</span><span class="mh">0x60000208UL</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">},</span><span class="n">NULLCLBK</span><span class="p">}</span></div><div class='line' id='LC357'><span class="cp">#endif</span></div><div class='line' id='LC358'><span class="cp">#if (PDO_k_TXPDODIR_SIZE &gt; 3)</span></div><div class='line' id='LC359'>&nbsp;<span class="p">,{</span><span class="mh">0x1A03</span><span class="p">,</span><span class="mi">2</span><span class="p">,{</span><span class="mh">0x64010110UL</span><span class="p">,</span><span class="mh">0x64010210UL</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">,</span><span class="mi">0</span><span class="p">},</span><span class="n">NULLCLBK</span><span class="p">}</span> </div><div class='line' id='LC360'><span class="cp">#endif</span></div><div class='line' id='LC361'>&nbsp;&nbsp;<span class="p">};</span></div><div class='line' id='LC362'><br/></div><div class='line' id='LC363'><br/></div><div class='line' id='LC364'><span class="cp">#endif </span><span class="cm">/* #if (PDO_k_TXPDODIR_SIZE != 0) */</span><span class="cp"></span></div><div class='line' id='LC365'><br/></div><div class='line' id='LC366'><span class="cm">/*** End Of File ***/</span></div><div class='line' id='LC367'><br/></div></pre></div>
              
            
          </td>
        </tr>
      </table>
    
  </div>


          </div>
        </div>
      </div>
    </div>
  

  </div>


<div class="frame frame-loading" style="display:none;">
  <img src="https://a248.e.akamai.net/assets.github.com/images/modules/ajax/big_spinner_336699.gif" height="32" width="32">
</div>

    </div>
  
      
    </div>

    <div id="footer" class="clearfix">
      <div class="site">
        
          <div class="sponsor">
            <a href="http://www.rackspace.com" class="logo">
              <img alt="Dedicated Server" height="36" src="https://a248.e.akamai.net/assets.github.com/images/modules/footer/rackspace_logo.png?v2" width="38" />
            </a>
            Powered by the <a href="http://www.rackspace.com ">Dedicated
            Servers</a> and<br/> <a href="http://www.rackspacecloud.com">Cloud
            Computing</a> of Rackspace Hosting<span>&reg;</span>
          </div>
        

        <ul class="links">
          
            <li class="blog"><a href="https://github.com/blog">Blog</a></li>
            <li><a href="https://github.com/about">About</a></li>
            <li><a href="https://github.com/contact">Contact &amp; Support</a></li>
            <li><a href="https://github.com/training">Training</a></li>
            <li><a href="http://jobs.github.com">Job Board</a></li>
            <li><a href="http://shop.github.com">Shop</a></li>
            <li><a href="http://developer.github.com">API</a></li>
            <li><a href="http://status.github.com">Status</a></li>
          
        </ul>
        <ul class="sosueme">
          <li class="main">&copy; 2011 <span id="_rrt" title="0.05371s from fe3.rs.github.com">GitHub</span> Inc. All rights reserved.</li>
          <li><a href="/site/terms">Terms of Service</a></li>
          <li><a href="/site/privacy">Privacy</a></li>
          <li><a href="https://github.com/security">Security</a></li>
        </ul>
      </div>
    </div><!-- /#footer -->

    <script>window._auth_token = "a6843b4a7098db669586fc1388ec1cd40e5763c7"</script>
    

<div id="keyboard_shortcuts_pane" class="instapaper_ignore readability-extra" style="display:none">
  <h2>Keyboard Shortcuts <small><a href="#" class="js-see-all-keyboard-shortcuts">(see all)</a></small></h2>

  <div class="columns threecols">
    <div class="column first">
      <h3>Site wide shortcuts</h3>
      <dl class="keyboard-mappings">
        <dt>s</dt>
        <dd>Focus site search</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>?</dt>
        <dd>Bring up this help dialog</dd>
      </dl>
    </div><!-- /.column.first -->

    <div class="column middle" style='display:none'>
      <h3>Commit list</h3>
      <dl class="keyboard-mappings">
        <dt>j</dt>
        <dd>Move selected down</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>k</dt>
        <dd>Move selected up</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>t</dt>
        <dd>Open tree</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>p</dt>
        <dd>Open parent</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>c <em>or</em> o <em>or</em> enter</dt>
        <dd>Open commit</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>y</dt>
        <dd>Expand URL to its canonical form</dd>
      </dl>
    </div><!-- /.column.first -->

    <div class="column last" style='display:none'>
      <h3>Pull request list</h3>
      <dl class="keyboard-mappings">
        <dt>j</dt>
        <dd>Move selected down</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>k</dt>
        <dd>Move selected up</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>o <em>or</em> enter</dt>
        <dd>Open issue</dd>
      </dl>
    </div><!-- /.columns.last -->

  </div><!-- /.columns.equacols -->

  <div style='display:none'>
    <div class="rule"></div>

    <h3>Issues</h3>

    <div class="columns threecols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt>j</dt>
          <dd>Move selected down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>k</dt>
          <dd>Move selected up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>x</dt>
          <dd>Toggle select target</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o <em>or</em> enter</dt>
          <dd>Open issue</dd>
        </dl>
      </div><!-- /.column.first -->
      <div class="column middle">
        <dl class="keyboard-mappings">
          <dt>I</dt>
          <dd>Mark selected as read</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>U</dt>
          <dd>Mark selected as unread</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>e</dt>
          <dd>Close selected</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>y</dt>
          <dd>Remove selected from view</dd>
        </dl>
      </div><!-- /.column.middle -->
      <div class="column last">
        <dl class="keyboard-mappings">
          <dt>c</dt>
          <dd>Create issue</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>l</dt>
          <dd>Create label</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>i</dt>
          <dd>Back to inbox</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>u</dt>
          <dd>Back to issues</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>/</dt>
          <dd>Focus issues search</dd>
        </dl>
      </div>
    </div>
  </div>

  <div style='display:none'>
    <div class="rule"></div>

    <h3>Network Graph</h3>
    <div class="columns equacols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt><span class="badmono">←</span> <em>or</em> h</dt>
          <dd>Scroll left</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">→</span> <em>or</em> l</dt>
          <dd>Scroll right</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">↑</span> <em>or</em> k</dt>
          <dd>Scroll up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">↓</span> <em>or</em> j</dt>
          <dd>Scroll down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>t</dt>
          <dd>Toggle visibility of head labels</dd>
        </dl>
      </div><!-- /.column.first -->
      <div class="column last">
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">←</span> <em>or</em> shift h</dt>
          <dd>Scroll all the way left</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">→</span> <em>or</em> shift l</dt>
          <dd>Scroll all the way right</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">↑</span> <em>or</em> shift k</dt>
          <dd>Scroll all the way up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">↓</span> <em>or</em> shift j</dt>
          <dd>Scroll all the way down</dd>
        </dl>
      </div><!-- /.column.last -->
    </div>
  </div>

  <div >
    <div class="rule"></div>
    <div class="columns threecols">
      <div class="column first" >
        <h3>Source Code Browsing</h3>
        <dl class="keyboard-mappings">
          <dt>t</dt>
          <dd>Activates the file finder</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>l</dt>
          <dd>Jump to line</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>y</dt>
          <dd>Expand URL to its canonical form</dd>
        </dl>
      </div>
    </div>
  </div>
</div>

    <div id="markdown-help" class="instapaper_ignore readability-extra">
  <h2>Markdown Cheat Sheet</h2>

  <div class="cheatsheet-content">

  <div class="mod">
    <div class="col">
      <h3>Format Text</h3>
      <p>Headers</p>
      <pre>
# This is an &lt;h1&gt; tag
## This is an &lt;h2&gt; tag
###### This is an &lt;h6&gt; tag</pre>
     <p>Text styles</p>
     <pre>
*This text will be italic*
_This will also be italic_
**This text will be bold**
__This will also be bold__

*You **can** combine them*
</pre>
    </div>
    <div class="col">
      <h3>Lists</h3>
      <p>Unordered</p>
      <pre>
* Item 1
* Item 2
  * Item 2a
  * Item 2b</pre>
     <p>Ordered</p>
     <pre>
1. Item 1
2. Item 2
3. Item 3
   * Item 3a
   * Item 3b</pre>
    </div>
    <div class="col">
      <h3>Miscellaneous</h3>
      <p>Images</p>
      <pre>
![GitHub Logo](/images/logo.png)
Format: ![Alt Text](url)
</pre>
     <p>Links</p>
     <pre>
http://github.com - automatic!
[GitHub](http://github.com)</pre>
<p>Blockquotes</p>
     <pre>
As Kanye West said:
> We're living the future so
> the present is our past.
</pre>
    </div>
  </div>
  <div class="rule"></div>

  <h3>Code Examples in Markdown</h3>
  <div class="col">
      <p>Syntax highlighting with <a href="http://github.github.com/github-flavored-markdown/" title="GitHub Flavored Markdown">GFM</a></p>
      <pre>
```javascript
function fancyAlert(arg) {
  if(arg) {
    $.facebox({div:'#foo'})
  }
}
```</pre>
    </div>
    <div class="col">
      <p>Or, indent your code 4 spaces</p>
      <pre>
Here is a Python code example
without syntax highlighting:

    def foo:
      if not bar:
        return true</pre>
    </div>
    <div class="col">
      <p>Inline code for comments</p>
      <pre>
I think you should use an
`&lt;addr&gt;` element here instead.</pre>
    </div>
  </div>

  </div>
</div>
    

    <!--[if IE 8]>
    <script type="text/javascript" charset="utf-8">
      $(document.body).addClass("ie8")
    </script>
    <![endif]-->

    <!--[if IE 7]>
    <script type="text/javascript" charset="utf-8">
      $(document.body).addClass("ie7")
    </script>
    <![endif]-->

    
    
    
    <script type="text/javascript">(function(){var d=document;var e=d.createElement("script");e.async=true;e.src="https://d1ros97qkrwjf5.cloudfront.net/14/eum/rum.js	";e.type="text/javascript";var s=d.getElementsByTagName("script")[0];s.parentNode.insertBefore(e,s);})();NREUMQ.push(["nrf2","beacon-1.newrelic.com","2f94e4d8c2",64799,"dw1bEBZcX1RWRhoEClsAGhcMXEQ=",0,51,new Date().getTime()])</script>
  </body>
</html>

