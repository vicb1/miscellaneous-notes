# cheap-computer-build

I was able to create this PC build for ~$400, which is a steal compared to [similarly spec'ed COTS options](https://www.newegg.com/p/pl?N=100897449%20601195636&Order=PRICE)

![image](https://raw.githubusercontent.com/vicb1/miscellaneous-notes/master/cheap-computer-build-1.jpg)

## Components

[Dell Optiplex MT](https://www.ebay.com/sch/i.html?_from=R40&_trksid=p2334524.m570.l1313.TR4.TRC0.A0.H0.Xoptiplex+9010+mt.TRS0&_nkw=optiplex+9010+mt&_sacat=0&LH_TitleDesc=0&_sop=15&_osacat=0&_odkw=optiplex+90+mt&LH_BIN=1 ), bought for the enclosure/motherboard/processor.  I got a Dell Optiplex 9010 MT because it had dual PCI slots (for 2 graphics cards) and high memory capability.

[Spec sheets like this](https://i.dell.com/sites/csdocuments/Shared-Content_data-Sheets_Documents/en/aa/Dell_OptiPlex_9010_spec_sheet.pdf  ) can be found to get the full information on the Dell version

[Compatible memory](https://www.ebay.com/sch/i.html?_from=R40&_trksid=m570.l1313&_nkw=PC3-12800U+DDR3+Dell+Optiplex+9010&_sacat=0  ), I got 4x8GB

[solid state drive](https://www.newegg.com/p/pl?N=100011693%20600038492%20600038502%20600038519&d=solid%20state&Order=PRICE ), I got 500GB since it was a good price to size ratio.  [Additional drive](https://www.newegg.com/p/pl?N=100167523%20600003298  
) to store non-speed-essential items, I went with a 1TB

[Graphics card](https://www.ebay.com/sch/i.html?_from=R40&_nkw=1070&_sacat=0&LH_BIN=1&_sop=15), I got a used 1070 because it was a good price for the performance.  There are also some [uncomfortably cheap 1050Ti's](https://www.ebay.com/itm/GTX1050-750Ti-970-960-1-2-4GB-Memory-GDDR5-HDMI-Graphics-Card-for-NVIDIA-GeForce/202706305731?hash=item2f323cc2c3%3Am%3AmijheVp1STfJf8pgU4Ix6qw&LH_BIN=1 ), if you're a risk taker

[Power supply](https://www.newegg.com/Power-Supplies/Category/ID-32  ), I was able to catch a Gold standard 650W one for $60, which I think would be able to handle 2 1070 graphics cards.  The power supply I got was oversized, so I had to remove the cover latching mechanism for it to fit, and just used a bolt/nut instead to hold the cover on.

## Additional options

Note that for a second graphics card to fit in the Optiplex 9010, the bottom of the case would have to be dremeled off, which I may play with at one point

Also the Optiplex 9010 has an [Intel Q77 Express chipset](http://www.cpu-upgrade.com/mb-Intel_(chipsets)/Q77_Express.html), so the [i7-3770K](https://www.ebay.com/sch/i.html?_from=R40&_nkw=i7-3770K&_sacat=0&_sop=15) seems to be the best processor the computer can support.  Another strategy is to buy a cheaper PC with a worse processor, along with a separate compatible higher performance processor.

# Bonus: RAID1 home network storage

I wanted a home storage solution that would stay backed up if a drive failed, and that I could access from anywhere in the home.  

My solution was to have a RAID1 setup, where you have 2 hard drives that are written to simultaneously, so if one fails the other rebuilds it automatically, and in the case the rebuild process also fails data can still be recovered from the good drive.

I went with the [Syba SY-ENC35028 USB 3.0 3.5" 2-Bay RAID Storage Enclosure](https://www.newegg.com/syba-sy-enc35028/p/N82E16816124081?Item=9SIA6ZP8VG3026) because it was cheap and allowed for a simple USB connection to a computer.  Other cheap options included buying a [RAID1 pci card](https://www.newegg.com/p/0ZK-08C1-08VR7?Item=9SIAN0VB814360&Description=raid1&cm_re=raid1-_-9SIAN0VB814360-_-Product&quicklink=true) to mount into a desktop computer, but that was too much hassle for me.  

The drives I used were two [2TB Seagate Barracuda's](https://www.newegg.com/seagate-barracuda-st2000dm001-2tb/p/N82E16822178547?Item=9SIAAY99J23547) because they are cheap and still very quiet (watch out for the cheap drives that might be very loud on reads/writes).

However it turns out this Syba drive enclosure had a rediculously noisy fan, so I ended up buying an [after market one](https://www.newegg.com/p/1YF-00EC-000A5?Item=9SIAGHV7E00142) to replace it, which was luckily very quiet.  I also noticed the airflow slits on the Syba enclosure were a bit small for my taste, so I dremeled those to be larger, may or may not be necessary.

Then finally I was able to share the drive on my home network by creating a Windows username, and allowing that username/password to access the drive on my local network.  This is just a bit more secure than letting any ol' hacker on the local network automatically get into my files.
