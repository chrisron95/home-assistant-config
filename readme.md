<h1 align="center">
Chris Heder
<br>
Home Assistant Config
</h1>


<div align="center"><a name="menu"></a>
  <h4>
    <a href="http://www.chrisheder.com">
      My Site
    </a>
    <span> | </span>
    <a href="https://twitter.com/Chrisron95">
      Twitter
    </a>
    <span> | </span>
    <a href="https://www.youtube.com/channel/UC16XnoSyz4WLBzA7y9m-3Dg">
      YouTube
    </a>
    <span> | </span>
    <a href="https://www.linkedin.com/in/chrisheder/">
      LinkedIn
    </a>
  </h4>
</div>

---

This repo contains my latest [Home Assistant](https://home-assistant.io/) configuration. I'm Chris Heder, a proud nerd in South Florida. I've been working on this system as a hobby since roughly 2019 and it's grown exponentially since then. It all started with a simple Raspberry Pi setup that controlled only two lights, and over time has evolved to a virtual machine running on my old 2012 MacBook Pro that runs just about every aspect of the house, controlling every light, switch, fan, tv, etc. (details below).

This has been and will forever continue to be a fun hobby for me (hopefully I'll have a _true_ J.A.R.V.I.S. one day). I had a lot of help and inspiration to get where I am now (credits below) and I hope that in sharing my own configuration I can help inspire and help others who are setting up their own smart home.

In time, I plan on making some videos detaining some of the things I've implemented, as well as some cool new stuff I have on my to-do list. Follow me for updates as I do! Feel free to reach out on Twitter if you have any questions or comments, or just to say hi!

---

<a name="devices"></a>
<div align="center">
  <h4>
    <a href="https://github.com/chrisron95/home-assistant-config#host">
      Host Devices
    </a>
    <span> | </span>
    <a href="https://github.com/chrisron95/home-assistant-config#battery">
      Battery Backups
    </a>
    <span> | </span>
    <a href="https://github.com/chrisron95/home-assistant-config#networking">
      Networking
    </a>
    <span> | </span>
    <a href="https://github.com/chrisron95/home-assistant-config#alexa">
      Alexa
    </a>
    <span> | </span>
    <a href="https://github.com/chrisron95/home-assistant-config#lighting">
      Lighting
    </a>
    <span> | </span>
    <a href="https://github.com/chrisron95/home-assistant-config#switches">
      Switches
    </a>
    <span> | </span>
    <a href="https://github.com/chrisron95/home-assistant-config#media">
      Media Players
    </a>
    <span> | </span>
    <a href="https://github.com/chrisron95/home-assistant-config#climate">
      Climate
    </a>
    <span> | </span>
    <a href="https://github.com/chrisron95/home-assistant-config#sensors">
      Sensors
    </a>
    <span> | </span>
    <a href="https://github.com/chrisron95/home-assistant-config#security">
      Security
    </a>
    <span> | </span>
    <a href="https://github.com/chrisron95/home-assistant-config#printing">
      3D Printing
    </a>
    <span> | </span>
    <a href="https://github.com/chrisron95/home-assistant-config#landscape">
      Landscape Lighting/Light Show
    </a>
  </h4>
</div>

<table align="center" border="0" style="table-layout: fixed; width: 100%">
  <tr>
    <td colspan="4">
      <a name="host"></a><h3>My Host Devices</h3>
    </td>
  </tr>
  <tr>
    <td align="center" colspan="1">
      MacBook Pro (mid-2012)
      <br>
      <p>
	      This is my old laptop, when I upgraded to a new one I converted this into a 24/7 server.
	   </p>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/LaCie-FireWire800-External-301543-Aluminum/dp/B0052MNIAA">LaCie D2 Quarda USB 3.0</a>
      <br>
      <p>
	      This is a 4tb hard drive, used as a Plex media server.
	   </p>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/LaCie-Thunderbolt-2-Desktop-Drive-9000472U/dp/B00O1Q8ZD8/ref=sr_1_4?keywords=lacie+d2+thunderbolt+2&qid=1652733773&sprefix=lacie+d2+thunderbolt+2%2Caps%2C74&sr=8-4">LaCie D2 Thunderbolt 2</a>
      <br>
      <p>
	      Another 4tb hard drive. This is my personal server, used for old photos, videos, music, documents, etc.
      </p>
    </td>
    <td align="center" colspan="1">
      <a href="https://us.amazon.com/LaCie-Thunderbolt-External-Drive-Desktop/dp/B076C3ZZ5V">LaCie 2big Thunderbolt 2</a>
      <br>
      <p>
	      This is an 8tb hard drive, I use this as my Time Machine backup. All my computers (including HA and my personal server) are regularly backed up on here.
      </p>
    </td>
  </tr>
  <tr>
    <td align="center" colspan="1">
	    <img border="0" src="https://refreshcomputers.net/shop/wp-content/uploads/2018/05/71z-mURq4QL._SL1500_-15.jpg" height="auto" width="200px">
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/dp/B000QZ3UG0?ref_=cm_sw_r_cp_ud_dp_9W3M92E3S2GS9DCYW436" target="_blank">
        <img border="0" src="https://m.media-amazon.com/images/I/81yxj+cck7L._AC_SL1500_.jpg" height="auto" width="200px">
      </a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/LaCie-Thunderbolt-2-Desktop-Drive-9000472U/dp/B00O1Q8ZD8/ref=sr_1_4?keywords=lacie+d2+thunderbolt+2&qid=1652733773&sprefix=lacie+d2+thunderbolt+2%2Caps%2C74&sr=8-4" target="_blank">
        <img border="0" src="https://m.media-amazon.com/images/I/81HsZPbhcpL._AC_SL1500_.jpg" height="auto" width="200px">
      </a>
    </td>
    <td align="center" colspan="1">
      <a href="https://us.amazon.com/LaCie-Thunderbolt-External-Drive-Desktop/dp/B076C3ZZ5V" target="_blank">
        <img border="0" src="https://m.media-amazon.com/images/I/71A6eIDizkL._AC_SL1500_.jpg" height="auto" width="200px">
      </a>
    </td>
  </tr>
  <tr>
    <td colspan="4">
      <p>
        My setup
      </p>
      <ul>
        <li>
        	I have Home Assistant OS running on my MacBook Pro using <a href="https://www.virtualbox.org/wiki/Downloads">VirtualBox</a>. I followed <a href="https://www.home-assistant.io/installation/macos">the instructions provided in the HA documentation</a>
        	<ul>
        		<li> It's very important that if you're using USB devices, you install the VM VirtualBox Extension Pack (from the same VirtualBox link above) and install it on your Mac. Took me longer than I care to admit to realize this. Once installed I never had another problem with USB devices again.
        	</ul>
        </li>
        <li>I also run a <a href="https://www.plex.tv">Plex media server</a> on my Mac</li>
      </ul>
    </td>
  </tr>
  <tr>
    <td colspan="4">
      <a name="battery"></a><h3>Battery Backups</h3>
    </td>
  </tr>
  <tr>
    <td align="center" colspan="2">
      <a href="https://amazon.com/dp/B00429N19W?ref_=cm_sw_r_cp_ud_dp_RW955CZDRR5QMGA5HZY8">(2) CyberPower CP1500PFCLCD</a>
    </td>
    <td align="center" colspan="2">
      <a href="https://www.amazon.com/dp/B000QZ3UG0?ref_=cm_sw_r_cp_ud_dp_M3BE8B36KG82B85NCKYX">CyberPower CP1000AVRLCD</a>
    </td>
  </tr>
  <tr>
    <td align="center" colspan="2">
      <a href="https://www.amazon.com/dp/B00429N19W?ref_=cm_sw_r_cp_ud_dp_6JW1XZT4EMZFADYZZAGP" target="_blank">
        <img border="0" src="https://m.media-amazon.com/images/I/71mhftPO1dL._AC_SL1500_.jpg" height="200px">
      </a>
    </td>
    <td align="center" colspan="2">
      <a href="https://www.amazon.com/dp/B000QZ3UG0?ref_=cm_sw_r_cp_ud_dp_9W3M92E3S2GS9DCYW436" target="_blank">
        <img border="0" src="https://m.media-amazon.com/images/I/71rF3hGrGaL._AC_SL1500_.jpg" height="200px">
      </a>
    </td>
  </tr>
  <tr>
    <td colspan="4">
      <p>
        In South Florida, power goes out fairly frequently. Mainly because of storms, but we all know Florida drivers aren't the best either so, you know, utility poles get hit too. Or palm fronds fall on the power line by my house causing the transformer to explode. That's always fun (each have happened multiple times over the years). Florida's greeeeat. But anyway, considering power is kinda necessary for a smart home, I have
        several UPS (uninterruptable power supply) units throughout my house. I <i>highly</i> recommend the CP1500PFCLCD because it's got a heck of a battery in it and the pure sinewave keeps all my devices from turning off during the transition from AC to battery (the other models are good too but without the pure sinewave, I've had devices like TVs turn off when it switches over to battery). Not to mention, it's been going strong for a few years now without needing a replacement battery.
      </p>
      <ul>
        <li>One CP1500 is in my "Lab" and it powers most of the electronics in the room, including my HA equipment, a couple external hard drives, two desks each with monitors, my TV, even my 3D printer! All from this one power supply. Even with all
          that connected, it'll still last usually about an hour (give or take) without any issue.</li>
        <li>The other CP1500 is in my living room powering my media center.</li>
        <li>The CP1000 is in the bedroom. This one isn't quite as important, but it powers my TV, bedroom stereo, and my lamp with a Philips HUE lightbulb (super useful since it doesn't draw much power and lets me still have light when the power's
          out)</li>
      </ul>
      <p>
        In Home Assistant, I use the <a href="https://github.com/hassio-addons/addon-nut">Network UPS Tools (NUT) add-on</a> (combined with the accompanying <a href="https://www.home-assistant.io/integrations/nut/">integration</a>) to report the status of the CP1500 in
        my Lab. This allows me to use that information for automations. For example, I have an automation that sends my iPhone a critical alert if/when the power goes out at my house. In the future, I also plan to add automations to do things such
        as pause any active 3D print job, and safely turn off some devices if the battery's getting close to running out.
      </p>
      <p>
        Now just a fair warning, NUT is a bit of a pain in the you-know-what. It took me quite a while to get my unit consistently reporting. I had to set up an automation that would basically watch for any problems, and restart the addon when there
        is. Lately it's been working fine and hasn't needed the restart, but it's there just ready and waiting for if/when there is a problem.
      </p>
    </td>
  </tr>
  <tr>
    <td colspan="4">
      <a name="networking"></a><h3>Networking</h3>
    </td>
  </tr>
  <tr>
    <td align="center" colspan="1">
      <a href="https://store.ui.com/collections/unifi-network-unifi-os-consoles/products/unifi-dream-machine">Unifi Dream Machine</a>
    </td>
    <td align="center" colspan="1">
      <a href="https://store.ui.com/collections/unifi-network-wireless/products/unifi-ap-6-lite">(2) Unifi AP 6 Lite</a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/gp/product/B000N99BBC/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&th=1">TP-Link Gigabit Unmanaged Network Switch</a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/gp/product/B01MRO4M73/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1">Netgear Gigabit Unmanaged PoE Switch</a>
    </td>
  </tr>
  <tr>
    <td align="center" colspan="1">
      <a href="https://store.ui.com/collections/unifi-network-unifi-os-consoles/products/unifi-dream-machine" target="_blank">
        <img border="0" src="https://cdn.shopify.com/s/files/1/1439/1668/products/UDM_03_grande.png?v=1633676993" height="auto" width="200px">
      </a>
    </td>
    <td align="center" colspan="1">
      <a href="https://store.ui.com/collections/unifi-network-wireless/products/unifi-ap-6-lite" target="_blank">
        <img border="0" src="https://cdn.shopify.com/s/files/1/1439/1668/products/U6-Lite_01_grande.png?v=1616575943" height="auto" width="200px">
      </a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/gp/product/B000N99BBC/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&th=1" target="_blank">
        <img border="0" src="https://m.media-amazon.com/images/I/51rf6vXgZ4L._AC_SL1163_.jpg" height="auto" width="200px">
      </a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/gp/product/B01MRO4M73/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1" target="_blank">
        <img border="0" src="https://m.media-amazon.com/images/I/715vBT2kIEL._AC_SL1500_.jpg" height="auto" width="200px">
      </a>
    </td>
  </tr>
  <tr>
    <td colspan="4">
      <p>
        Considering I have probably 75+ devices connected to my wifi at any given time (all these smart switches/plugs, ESP devices and everything really add up) I decided to go nuclear and upgrade to Unifi. I used to have Netgear Orbi, which was great, but as the devices started adding up, it started to really slow down our regular devices. Which of course drove everyone in the house nuts. So going nuclear seemed the best option. Ever since, it's been flawless.
      </p>
      <p>
        Now, I can guarantee I'm not using my system to its fullest capabilities. There's plenty I still don't quite understand about it. But it's doing pretty much everything I need. The UDM is in my living room, basically the center point of the house. It's connected to an ethernet switch in my media center that routes to all the devices within. Unfortunately my house isn't wired for ethernet, but I managed to run a Cat5E line upstairs to an ethernet switch in my Lab where my HA setup is. There's an access point hardwired there, then I also have an AP downstairs by the front door connected via wireless mesh. With these three, I have flawless coverage everywhere inside and outside the house.
      </p>
      <p>
        In Home Assistant, I use the <a href="https://github.com/hassio-addons/addon-adguard-home">AdGuard Home add-on</a> (and of course the <a href="https://www.home-assistant.io/integrations/adguard/">accompanying integration</a>) to block ads on a network-wide level. This is super helpful and I can't imagine going back to dealing with constant ads. Unfortunately, this doesn't stop YouTube ads, and it does occasionally block things that you need to let through (like some streaming services that have ads - <i>Looking at you Paramount+</i> - without unblocking those, you literally can't watch the content you pay to watch. Ugh.) but that's an easy fix, and if something's not working it's easy to narrow down what's being blocked and unblock it (or vice-versa). Plus you can block/unblock for specific devices, so you don't have to worry about your phone catching an ad from a TV service you unblocked. To be perfectly honest, I used to have PiHole, and I do prefer that. But the ease-of-use of AdGuard and it being built-in to HA makes life so much simpler.
      </p>
      <p>
        I also have <a href="https://github.com/hassio-addons/addon-wireguard">the WireGuard add-on</a> running. This gives me an extremely easy and reliable VPN. It allows me to connect to my home network from anywhere with an internet connection. One of my favorite benefits to this, is I can get my ad-blocking abilities anywhere. I just about always have my VPN connected on my phone when I'm away from home. The second I see an ad, I pop over to my settings and turn on VPN, refresh my page and ads are gone. Soooooo nice. Plus, it allows me to connect to any of my home devices as if I'm right in the house. Great when I have to diagnose an issue when I'm out.
      </p>
    </td>
  </tr>
  <tr>
    <td colspan="4">
      <a name="alexa"></a><h3>Alexa</h3>
    </td>
  </tr>
  <tr>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/dp/B06XCM9LJ4/ref=twister_B07456BG8N?_encoding=UTF8&psc=1">Amazon Echo 2nd Gen</a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/Echo-Dot/dp/B07FZ8S74R/ref=sr_1_1?keywords=echo+dot+3rd+generation&qid=1653071868&sprefix=echo+dot+3%2Caps%2C199&sr=8-1">(2) Amazon Echo Dot 3rd gen</a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/Echo-Show-5-2nd-Gen-2021-release/dp/B08J8FFJ8H/ref=sr_1_1?keywords=echo+show+5&qid=1653071967&sprefix=echo+show%2Caps%2C146&sr=8-1">Amazon Echo Show (I don't recommend)</a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/Echo-Flex/dp/B07MLY3JKV/ref=sr_1_1?crid=1M193M3R9Q954&keywords=echo+flex&qid=1653072066&sprefix=echo+flex%2Caps%2C120&sr=8-1">Amazon Echo Flex (with motion sensor attachment)</a>
    </td>
  </tr>
  <tr>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/dp/B06XCM9LJ4/ref=twister_B07456BG8N?_encoding=UTF8&psc=1" target="_blank">
        <img border="0" src="https://m.media-amazon.com/images/I/71vhCaHhHTL._AC_SL1000_.jpg" height="200px" width="auto">
      </a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/Echo-Dot/dp/B07FZ8S74R/ref=sr_1_1?keywords=echo+dot+3rd+generation&qid=1653071868&sprefix=echo+dot+3%2Caps%2C199&sr=8-1" target="_blank">
        <img border="0" src="https://m.media-amazon.com/images/I/6182S7MYC2L._AC_SL1000_.jpg" height="auto" width="200px">
      </a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/Echo-Show-5-2nd-Gen-2021-release/dp/B08J8FFJ8H/ref=sr_1_1?keywords=echo+show+5&qid=1653071967&sprefix=echo+show%2Caps%2C146&sr=8-1" target="_blank">
        <img border="0" src="https://m.media-amazon.com/images/I/51iobpaEM5S._AC_SL1000_.jpg" height="auto" width="200px">
      </a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/Echo-Flex/dp/B07MLY3JKV/ref=sr_1_1?crid=1M193M3R9Q954&keywords=echo+flex&qid=1653072066&sprefix=echo+flex%2Caps%2C120&sr=8-1" target="_blank">
        <img border="0" src="https://m.media-amazon.com/images/I/41fTockMHSL._AC_SL1000_.jpg" height="auto" width="200px">
      </a>
    </td>
  </tr>
  <tr>
    <td colspan="4">
      <p>
        I use Echo devices throughout the house, there's one in each room. They're used for all kinds of audio notifications, among their usual capabilities. They definitely have their flaws, but I find that they work the best out of the smart speakers. I haven't tried Google Home, but I tried Apple HomePod and was disappointed by it's lack of functionality.
      </p>
      <p>
        I used to use them like normal... as do most people. But thanks to the vast abilities of the <a href="https://github.com/custom-components/alexa_media_player">Alexa Media Player integration</a> and with the help of <a href="https://youtu.be/Ys9xlo3Rq4E">Jeffery Stone's JARVIS video</a>, I was able to setup my own version of JARVIS directly using these Echo devices (<a href="https://github.com/chrisron95/home-assistant-config/blob/master/packages/notify.yaml">check out my notify.yaml package here for details</a>). It works fantastic, and little by little I've started overriding her usual commands with my own JARVIS responses. I like to tell people Alexa and JARVIS work together in my house. One of my favorite aspects of this other than the voice, is... no more recommendations! No more asking for the weather and hearing "By the way, I can also order printer ink..." because that's such useful and relevant information 😑. The only hassle is writing the templates to get the same information. But it's absolutely worth the hassle in my opinion.
      </p>
      <p>
        I also have an <a href="https://www.amazon.com/Echo-Auto--Hands-free-Alexa-in-your-car-with-your-phone/dp/B07VTK654B/ref=sr_1_1?crid=CJ6H0ILXR28S&keywords=echo+auto&qid=1653074164&sprefix=echo+auto%2Caps%2C136&sr=8-1">Echo Auto</a>, unfortunately I can't get JARVIS working in there. I think it's a limitation of the device, not entirely sure. I haven't had too much time to dedicate to it, but I'm hoping one of these days I'll be able to get it working. Just imagine having JARVIS in the car too.
      </p>
      <p>
        I also use <a href="https://www.nabucasa.com">Nabu Casa</a> which gives me access to all my Home Assistant devices within Alexa. This gives me the ability to eliminate most of the cloud integrations within Alexa, so instead of talking to the respective integrations, all my devices are provided by Home Assistant. This adds to the ability of having JARVIS control everything instead of Alexa, and also solves a lot of the "I'm having trouble with that" messages you get with cloud integrations. I believe this can also be achieved by creating your own custom skill, but that's a fairly big job that I just haven't had the chance (yet) to play around with.
      </p>
    </td>
  </tr>
  <tr>
    <td colspan="4">
      <a name="lighting"></a><h3>Lighting</h3>
    </td>
  </tr>
  <tr>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/gp/product/B07D1J5QC7/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1">Philips Hue</a>
      <p>
        Hub, 2 color bulbs, and 4 simple white bulbs
      </p>
    </td>
    <td align="center" colspan="1">
      <a href="https://kno.wled.ge">WLED</a>
      <p>
        Used mainly on <a href="https://www.amazon.com/gp/product/B08C7FYM5T/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&th=1">WeMos D1 Minis</a> for pixel strips like <a href="https://www.amazon.com/gp/product/B01CDTEKAG/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1">these WS2812B strips</a>
      </p>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/Hefddehy-Controller-DC5-24V-Input-Ribbon/dp/B09HTTPH6T">H801</a>
      <p>
        Used on less-smart RGBW light strips like <a href="https://www.amazon.com/gp/product/B07JKNFMC3/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&th=1">these</a>, flashed with <a href="https://tasmota.github.io/docs/">Tasmota</a>
      </p>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/gp/product/B07JC3L4Z6/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1">Single Color LED Dimmer</a>
      <p>
        Used for single color LED strips like <a href="https://www.amazon.com/gp/product/B002Q907EW/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&th=1">these</a>. Also flashed with <a href="https://tasmota.github.io/docs/">Tasmota</a>
      </p>
    </td>
  </tr>
  <tr>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/gp/product/B07D1J5QC7/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1" target="_blank">
        <img border="0" src="https://m.media-amazon.com/images/I/61HmVvjfBAL._AC_SL1500_.jpg" height="auto" width="200px">
      </a>
    </td>
    <td align="center" colspan="1">
      <a href="https://kno.wled.ge" target="_blank">
        <img border="0" src="https://kno.wled.ge/assets/images/ui/headers/wled_logo_akemi.png" height="auto" width="200px">
      </a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/Hefddehy-Controller-DC5-24V-Input-Ribbon/dp/B09HTTPH6T" target="_blank">
        <img border="0" src="https://m.media-amazon.com/images/I/61cQjtxxGSS._AC_SL1500_.jpg" height="auto" width="200px">
      </a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/gp/product/B07JC3L4Z6/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1" target="_blank">
        <img border="0" src="https://m.media-amazon.com/images/I/51rgEvHyOiL._AC_SL1000_.jpg" height="auto" width="200px">
      </a>
    </td>
  </tr>
  <tr>
    <td colspan="4">
      <p>
        Most of the lights in the house are just simple lights controlled with smart switches (refer to next category for details). But I have a few Philips Hue smart bulbs. These were actually how I got started with my smart home, these were my first ever smart home-related purchase.
      </p>
      <p>
        Now aside from regular lights, I have several light strips throughout the house that provide ambient light. Some are smarter than others, but they're all smart in their own way. Pixel strips with WLED are by far my favorites though because they have the most functionality considering they're individually addressable, so you can have cool patterns play, not just a static color across the strip.
      </p>
      <p>
        The single color strips and controllers are used for very simple things like my under-the-cabinet lights in the kitchen and in my 3D printer enclosure. Basically places that I don't care about having color abilities.
      </p>
    </td>
  </tr>
  <tr>
    <td colspan="4">
      <a name="switches"></a><h3>Switches</h3>
    </td>
  </tr>
  <tr>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/gp/product/B07R4MFWCQ/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1">Treatlife Single Pole Switches</a>
      <p>
        These are used for the majority of my switches
      </p>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/gp/product/B07CKNWGN4/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1">Treatlife Single Pole Dimmer</a>
      <p>
        Oddly enough, the only dimmer I have is in my bathroom
      </p>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/gp/product/B07V4X7BRT/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1">Treatlife 3-way Switch</a>
      <p>
        Hallway/staircase light
      </p>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/SONOFF-iFAN04-L-Controller-Compatible-Assistant/dp/B09C21LX9R/ref=sr_1_1?keywords=sonoff%2Bifan03&qid=1653078818&sprefix=son%2Boff%2Bifan%2Caps%2C137&sr=8-1&th=1">iFan03</a>
      <p>
        Looks like iFan04 is only one available now. Don't know the difference.
      </p>
    </td>
  </tr>
  <tr>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/gp/product/B07R4MFWCQ/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1" target="_blank">
        <img border="0" src="https://m.media-amazon.com/images/I/51FaKKcgpaL._AC_SL1000_.jpg" height="auto" width="200px">
      </a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/gp/product/B07CKNWGN4/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1" target="_blank">
        <img border="0" src="https://m.media-amazon.com/images/I/613DKJfa0vL._AC_SL1500_.jpg" height="auto" width="200px">
      </a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/gp/product/B07V4X7BRT/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1" target="_blank">
        <img border="0" src="https://m.media-amazon.com/images/I/61v8lXdSWuL._SL1500_.jpg" height="auto" width="200px">
      </a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/SONOFF-iFAN04-L-Controller-Compatible-Assistant/dp/B09C21LX9R/ref=sr_1_1?keywords=sonoff%2Bifan03&qid=1653078818&sprefix=son%2Boff%2Bifan%2Caps%2C137&sr=8-1&th=1" target="_blank">
        <img border="0" src="https://m.media-amazon.com/images/I/51dPSNFFNyL._SL1500_.jpg" height="auto" width="200px">
      </a>
    </td>
  </tr>
  <tr>
    <td colspan="4">
      <p>
        I've replaced every switch in the house with a smart switch. Every switch, including the iFan, is flashed with <a href="https://tasmota.github.io/docs/">Tasmota</a> and use MQTT to sync with Home Assistant. They work flawlessly.
      </p>
      <p>
        The iFan03 works well but it took some annoying steps to get them working. They used different resistors in there than what's needed for 110v in the United States, so all speeds were super slow, even high speed. I had to get some 5uF capacitors and replace the two in each iFan03 with them. There's a good write-up <a href="https://www.digiblur.com/2019/12/sonoff-ifan03-install-with-complete-fan_24.html">by digiblurDIY</a> but unfortunately his links to the capacitors don't work anymore, and I couldn't find the ones I bought either. That being said, it seems there's now the iFan04... I have no clue if that one fixed this problem or not. The questions and answers on the listing are old, and it's at the same link as the old iFan03 which doesn't make it easy to tell for sure. But do some research. It's invasive and can be dangerous so proceed with caution and use your own judgement.
      </p>
    </td>
  </tr>
  <tr>
    <td colspan="4">
      <a name="media"></a><h3>Media Players</h3>
    </td>
  </tr>
  <tr>
    <td align="center" colspan="1">
      <a href="https://www.lg.com/us/tvs/lg-75um7570aue-4k-uhd-tv">LG 75" and 65" 4K Smart TVs</a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.apple.com/tv-home/">Apple TV (HD and 4K)</a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.plex.tv">Plex</a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/gp/product/B01EN005W0/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1">Pioneer VSX-1131</a>
    </td>
  </tr>
  <tr>
    <td align="center" colspan="1">
      <a href="https://www.lg.com/us/tvs/lg-75um7570aue-4k-uhd-tv" target="_blank">
        <img border="0" src="https://www.lg.com/us/images/tvs/md07000454/gallery/large01.jpg" height="auto" width="200px">
      </a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.apple.com/tv-home/" target="_blank">
        <img border="0" src="https://store.storeimages.cdn-apple.com/4982/as-images.apple.com/is/apple-tv-4k-hero-select-202104?wid=470&hei=556&fmt=jpeg&qlt=95&.v=1619139498000" height="auto" width="200px">
      </a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.plex.tv" target="_blank">
        <img border="0" src="https://upload.wikimedia.org/wikipedia/commons/thumb/7/7b/Plex_logo_2022.svg/1200px-Plex_logo_2022.svg.png" height="auto" width="200px">
      </a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/gp/product/B01EN005W0/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1" target="_blank">
        <img border="0" src="https://m.media-amazon.com/images/I/81W2JQHkxYL._AC_SL1500_.jpg" height="auto" width="200px">
      </a>
    </td>
  </tr>
  <tr>
    <td colspan="4">
      <p>
        There's 3 TVs in the house, the 75" LG is in the living room, 65" LG in the Lab, and I also have a 42" Samsung "smart" TV in the bedroom that's pretty dumb if you ask me.
      </p>
      <p>
        The living room is basically my home theater. I have the Pioneer VSX-1131 in there with the 4K Apple TV, along with a PS4, a 4K Blu-Ray player, and a Nintendo Switch, all connected to the Pioneer which acts as an HDMI switch. The TV, Pioneer, Apple TV, and PS4 all connect to Home Assistant, and I have pretty full control over everything through there. Admittedly, the Apple TV doesn't have as much functionality through HA as I'd like, but it's got quite a few abilities. Plus, as an Apple household, it works so well with all our devices that it's worth the very slight lack of abilities in HA.
      </p>
      <p>
        Also, I use the living room TV's optical output connected to an <a href="https://www.amazon.com/gp/product/B00KNNSKV0/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1">optical to RCA converter</a>, which is then connected to a <a href="https://www.amazon.com/gp/product/B076P2VS9H/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1">2 channel audio amp</a>. That connects to a <a href="https://www.amazon.com/Monoprice-109995-Speaker-Selector-Control/dp/B005E2YI7A/ref=sr_1_2?crid=2UAVX6DKGV9M&keywords=monoprice%2Bspeaker%2Bselector&qid=1653082422&sprefix=monoprice%2Bspeaker%2Bselector%2Caps%2C83&sr=8-2&th=1">Monoprice 6-channel speaker selector</a> (only use two outputs but planned for the future) which distributes audio from the TV and stereo to my patio in-ceiling and kitchen in-wall speakers, which each have an <a href="https://www.amazon.com/Monoprice-108243-Speaker-Controller-White/dp/B009GUR878/ref=sr_1_5?crid=8XEHATV07SOD&keywords=monoprice+wall+volume+control&qid=1653082577&sprefix=monoprice+wall+volume+control%2Caps%2C81&sr=8-5">in-wall volume controller</a>. I installed these many years ago, long before I started doing any smart home work. They were actually my very first addition to this house and probably one of my favorite things I've done. There's some stuff I would do differently if I did it today, but for the most part this system works really well.
      </p>
    </td>
  </tr>
  <tr>
    <td colspan="4">
      <a name="climate"></a><h3>Climate</h3>
    </td>
  </tr>
  <tr>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/ecobee4-Thermostat-Built-Sensor-Included/dp/B08BZTPMW1/ref=sr_1_2?crid=VTG70G4J1IEQ&keywords=ecobee4&qid=1653083095&sprefix=ecobee4%2Caps%2C90&sr=8-2">Ecobee4 Smart Thermostat</a>
    </td>
    <td align="center" colspan="1">
      <a href="https://espresense.com">Espresense</a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/gp/product/B0795F19W6/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&th=1">DHT22 Temp and Humidity Sensor</a>
    </td>
    <td align="center" colspan="1">
      <a href=""></a>
    </td>
  </tr>
  <tr>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/ecobee4-Thermostat-Built-Sensor-Included/dp/B08BZTPMW1/ref=sr_1_2?crid=VTG70G4J1IEQ&keywords=ecobee4&qid=1653083095&sprefix=ecobee4%2Caps%2C90&sr=8-2" target="_blank">
        <img border="0" src="https://m.media-amazon.com/images/I/41PWAJs6DdL._AC_.jpg" height="auto" width="200px">
      </a>
    </td>
    <td align="center" colspan="1">
      <a href="https://espresense.com" target="_blank">
        <img border="0" src="https://espresense.com/images/cover.png" height="auto" width="200px">
      </a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/gp/product/B0795F19W6/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&th=1" target="_blank">
        <img border="0" src="https://m.media-amazon.com/images/I/61GsxWmBEIL._AC_SL1200_.jpg" height="auto" width="200px">
      </a>
    </td>
    <td align="center" colspan="1">
      <a href="" target="_blank">
        <img border="0" src="" height="auto" width="200px">
      </a>
    </td>
  </tr>
  <tr>
    <td colspan="4">
      <p>
        Climate in my home is pretty simple for now. My Ecobee4 connects to my Home Assistant using HomeKit. This gives me local access regardless of the state of their cloud services. I also ignore the built in schedules and presets. I tried using them, but I wanted more options than simply "Home" "Away" and "Sleep". So now it's just set on eternal hold and Home Assistant controls the temperature with my own preset handler script and an input_select.
      </p>
      <p>
        I also use <a href="https://espresense.com">Espresense</a> flashed on an <a href="https://www.amazon.com/gp/product/B08MFCC4SR/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&th=1">ESP32</a> in each room of the house. This gives me several abilities, including bluetooth presence tracking, but for this category I use <a href="https://www.amazon.com/gp/product/B0795F19W6/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&th=1">DHT22 sensors</a> on each which gives me the temperature and humidity of each room in the house. Currently they're not used for anything other than simply reporting, but I have plans to integrate them into my climate handler script to give me some more accurate automatic temperature control depending on the room someone's in.
      </p>
    </td>
  </tr>
  <tr>
    <td colspan="4">
      <a name="sensors"></a><h3>Sensors</h3>
    </td>
  </tr>
  <tr>
    <td align="center" colspan="1">
      <a href="https://espresense.com">Espresense</a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/gp/product/B08MFCC4SR/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&th=1">ESP32 Mini</a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/gp/product/B081CSJV2V/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&th=1">ESP8266 NodeMCU</a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/gp/product/B08C7FYM5T/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&th=1">WeMos D1 Mini ESP8266</a>
    </td>
  </tr>
  <tr>
    <td align="center" colspan="1">
      <a href="https://espresense.com" target="_blank">
        <img border="0" src="https://espresense.com/images/cover.png" height="auto" width="200px">
      </a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/gp/product/B08MFCC4SR/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&th=1" target="_blank">
        <img border="0" src="https://m.media-amazon.com/images/I/816RuJ0ePxL._AC_SL1500_.jpg" height="auto" width="200px">
      </a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/gp/product/B081CSJV2V/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&th=1" target="_blank">
        <img border="0" src="https://m.media-amazon.com/images/I/618AQOe0NKL._AC_SL1100_.jpg" height="auto" width="200px">
      </a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/gp/product/B08C7FYM5T/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&th=1" target="_blank">
        <img border="0" src="https://m.media-amazon.com/images/I/71XnJjyUN7L._AC_SL1000_.jpg" height="auto" width="200px">
      </a>
    </td>
  </tr>
  <tr>
    <td colspan="4">
      <p>
        I've got tons of these around the house. Like I mentioned in the last category, I have Espresense flashed on an ESP32 in each room. This not only gives me temperature and humidity sensors in each room, but also ambient light and motion sensors for each. Also, bluetooth presence tracking so I can track where our iPhones and Apple Watches are within the house. I don't have the bluetooth tracking fully setup yet, but it's there and ready for the day I get around to setting that up. I definitely highly recommend Espresense, it's very simple to use and the developer is active and quick to help with any issues on his GitHub.
      </p>
    </td>
  </tr>
  <tr>
    <td colspan="4">
      <a name="security"></a><h3>Security</h3>
    </td>
  </tr>
  <tr>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/gp/product/B081CSJV2V/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&th=1">ESP8266 NodeMCU</a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/gp/product/B07WRNKXC1/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&th=1">Normally Open Reed Switch (and magnets)</a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/Schlage-BE469ZP-CAM-619-Deadbolt/dp/B07KQPQMXS/ref=sr_1_4?keywords=schlage%2Bz%2Bwave%2Bdoor%2Block&qid=1653085047&sprefix=schlage%2Bz%2Caps%2C121&sr=8-4&th=1">Schlage BE469ZP Smart Deadbolt</a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/gp/product/B072QLXK2T/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1">Ring Doorbell 2 and Spotlight Cam</a>
    </td>
  </tr>
  <tr>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/gp/product/B081CSJV2V/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&th=1" target="_blank">
        <img border="0" src="https://m.media-amazon.com/images/I/618AQOe0NKL._AC_SL1100_.jpg" height="auto" width="200px">
      </a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/gp/product/B07WRNKXC1/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&th=1" target="_blank">
        <img border="0" src="https://m.media-amazon.com/images/I/61BRKNgYMsL._AC_SL1000_.jpg" height="auto" width="200px">
      </a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/Schlage-BE469ZP-CAM-619-Deadbolt/dp/B07KQPQMXS/ref=sr_1_4?keywords=schlage%2Bz%2Bwave%2Bdoor%2Block&qid=1653085047&sprefix=schlage%2Bz%2Caps%2C121&sr=8-4&th=1" target="_blank">
        <img border="0" src="https://m.media-amazon.com/images/I/516GCTnfEdL._AC_SL1000_.jpg" height="auto" width="200px">
      </a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/gp/product/B072QLXK2T/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1" target="_blank">
        <img border="0" src="https://m.media-amazon.com/images/I/71wRosCkkBL._SL1500_.jpg" height="auto" width="200px">
      </a>
    </td>
  </tr>
  <tr>
    <td colspan="4">
      <p>
        There was an old ADT system installed in the house before we moved in, but the previous owners ripped out some necessary components. Aaaand I ripped out some more when we moved in since the control panel was useless at that point anyway. So since the house had sensors already on all the doors and windows, I hooked them all up to an ESP8266 NodeMCU flashed with ESPHome. One of the sensors was among the things ripped out forever ago, and I couldn't find any wired door sensors with good reviews... so I built my own with a magnetic reed switch and an accompanying magnet and just hooked it up to the old wiring. It works beautifully.
      </p>
      <p>
        The Schlage Z-Wave lock is connected to Home Assistant using an <a href="https://www.amazon.com/gp/product/B00X0AWA6E/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1">Aeotec Z-Stick Gen5 Z-Wave Stick</a>. Everything is managed using the <a href="https://github.com/FutureTense/keymaster">Keymaster integration in HACS</a> which works great and lets me very easily manage all the access codes at will, and gives me intelligent notifications for it.
      </p>
    </td>
  </tr>
  <tr>
    <td colspan="4">
      <a name="printing"></a><h3>3D Printing</h3>
    </td>
  </tr>
  <tr>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/Monoprice-Touchscreen-Filament-Preloaded-Printable/dp/B01JBEF3T8">Monoprice Maker Select Plus</a>
    </td>
    <td align="center" colspan="1">
      <a href="https://octoprint.org">OctoPrint</a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.ikea.com/us/en/p/lack-side-table-black-20011408/">IKEA Lack Enclosure</a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/gp/product/B0153R2A9I/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1">Raspberry Pi 7" Touch Screen</a>
    </td>
  </tr>
  <tr>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/Monoprice-Touchscreen-Filament-Preloaded-Printable/dp/B01JBEF3T8" target="_blank">
        <img border="0" src="https://m.media-amazon.com/images/I/41Kbnui7owL.jpg" height="auto" width="200px">
      </a>
    </td>
    <td align="center" colspan="1">
      <a href="https://octoprint.org" target="_blank">
        <img border="0" src="https://octoprint.org/assets/img/logo.png" height="auto" width="200px">
      </a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.ikea.com/us/en/p/lack-side-table-black-20011408/" target="_blank">
        <img border="0" src="https://www.ikea.com/us/en/images/products/lack-side-table-black__22518_pe107397_s5.jpg?f=xl" height="auto" width="200px">
      </a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/gp/product/B0153R2A9I/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1" target="_blank">
        <img border="0" src="https://m.media-amazon.com/images/I/51Fju0ie9sL._AC_SL1000_.jpg" height="auto" width="200px">
      </a>
    </td>
  </tr>
  <tr>
    <td colspan="4">
      <p>
        3D printing is fun, I've upgraded my setup several times over the years. Latest upgrade was the IKEA Lack enclosure. It's simply two Lack tables stacked on top of each other, connected with some 3D printed parts. The top part is enclosed in plexiglass. Very affordable upgrade.
      </p>
      <p>
        Everything is run from a Raspberry Pi with OctoPrint. I never use the printer's SD card and hardly ever even use the built-in controls. Everything is done right in OctoPrint. The Raspberry Pi is connected to the 7" touch screen to give me full control right at the printer. A bigger screen would be nicer, but what I have works well enough that I don't find it necessary to upgrade at the moment. Maybe one day.
      </p>
    </td>
  </tr>
  <tr>
    <td colspan="4">
      <a name="landscape"></a><h3>Landscape Lighting/Light Show</h3>
    </td>
  </tr>
  <tr>
    <td align="center" colspan="1">
      <a href="https://www.holidaycoro.com/AlphaPix-4-V2-RGB-Pixel-Controller-p/722-v2.htm">HolidayCoro AlphaPix Classic 4 Pixel Controller</a>
    </td>
    <td align="center" colspan="1">
      <a href="https://github.com/FalconChristmas/fpp">FPP (Falcon Christmas)</a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.holidaycoro.com/RGB-Flood-Light-p/163.htm">HolidayCoro RGB Flood Kit (now discontinued)</a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/gp/product/B00R2AZLD2/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&th=1">Netgear Nighthawk R6700</a>
    </td>
  </tr>
  <tr>
    <td align="center" colspan="1">
      <a href="" target="_blank">
        <img border="0" src="https://www.holidaycoro.com/v/vspfiles/photos/722-V2-2T.jpg?v-cache=1535294099" height="auto" width="200px">
      </a>
    </td>
    <td align="center" colspan="1">
      <a href="https://github.com/FalconChristmas/fpp" target="_blank">
        <img border="0" src="https://falconchristmas.com/images/Site%20LogoTransparent%204%20forum.png" height="auto" width="200px">
      </a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.holidaycoro.com/RGB-Flood-Light-p/163.htm" target="_blank">
        <img border="0" src="https://www.holidaycoro.com/v/vspfiles/photos/163-2T.jpg?v-cache=1360312772" height="auto" width="200px">
      </a>
    </td>
    <td align="center" colspan="1">
      <a href="https://www.amazon.com/gp/product/B00R2AZLD2/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&th=1" target="_blank">
        <img border="0" src="https://m.media-amazon.com/images/I/61FA9BbugzL._AC_SL1500_.jpg" height="auto" width="200px">
      </a>
    </td>
  </tr>
  <tr>
    <td colspan="4">
      <p>
        I started my light show in 2014 with a simple fire-hazard of a controller that used an Arduino and some relays mounted to a wood board. As time went on I quickly upgraded to much more legit and safe equipment, all culminating to what I have today. A lot of my lights have been upgraded to 12v RGB pixels, but I also have an upgraded version of my original lighting controller for dumb lights. It's basically an Arduino Mega and 16 solid-state relays, all enclosed in a weather-proof enclosure. It uses an <a href="https://www.amazon.com/gp/product/B00HG82V1A/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1">ethernet shield</a> which is how FPP communicates with it.
      </p>
      <p>
        <a href="https://github.com/FalconChristmas/fpp">FPP (Falcon Christmas)</a> runs on a Raspberry Pi 3B+ just inside the front door. That connects via ethernet to the Netgear Nighthawk router, which then distributes to the AlphaPix controller and all other devices. Yup, I have a whole router setup that's dedicated to my light show. My singing faces run off an Arduino connected to an <a href="https://www.amazon.com/gp/product/B01EA3UJJ4/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&th=1">ESP8266 ESP-01</a>, which lets them connect to my FPP instance over WiFi. That means they only need power and they can be a part of the show too.
      </p>
      <p>
        Now, some of the setup stays out year-round. The controllers stay out there, along with two RGB pixel strips that are permanently mounted to the face of my house, and two flood lights that I setup myself with the kit mentioned above. I used to have path lights too that were awesome, unfortunately the weather got the best of them so I eliminated them until I can find a better solution. I'm currently designing my own path lights that I'll be 3D printing and will use RGB pixel strips inside. Hope to have something to show off soon.
      </p>
      <p>
        FPP connects to Home Assistant through MQTT. The Raspberry Pi basically connects to the lights through ethernet to the router. Then it <i>also</i> connects to my home network through WiFi. It's truly an interesting setup and took me quite a while to get everything right. I had to do some interesting finessing to get <i>everything</i> into Home Assistant, including volume control and all. But now I have it working so well that I was able to eliminate the scheduler provided by FPP, and now everything is scheduled, controlled, and run directly from Home Assistant, including the off-season nightly landscape lighting.
      </p>
      <p>
        I'm planning on doing a video explaining all of this soon so stay tuned for more!
      </p>
    </td>
  </tr>
</table>

---

## Inspiration

I couldn't have gotten my setup to where it is now without the inspiration from a few fellow Home Assistant enthusiasts. Check out their links here:

### Jeffery Stone
- [His HA Config On GitHub](https://github.com/thejeffreystone/home-assistant-configuration)
- [His Site](https://slacker-labs.com)
- [His YouTube](https://www.youtube.com/channel/UCipZJ6748kd8TbelSxcvcVg)
- [His Twitter](https://twitter.com/thejeffreystone)

### Carlo Costanzo
- [His HA Config On GitHub](https://github.com/CCOSTAN/Home-AssistantConfig)
- [His Site](https://www.vcloudinfo.com/)
- [His YouTube](https://www.youtube.com/vCloudInfo)
- [His Twitter](https://twitter.com/ccostan)

I also got the inspiration for my front-end from [SWAKES](https://github.com/pqpxo/SWAKES_hassio) and [matt8707](https://github.com/matt8707/hass-config). My front end is still very much a work in progress, but I hope to soon have that finalized so I can share that on here as well.