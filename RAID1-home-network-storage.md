# RAID1-home-network-storage

I wanted a home storage solution that would stay backed up if a drive failed, and that I could access from anywhere in the home.  

My solution was to have a RAID1 setup, where you have 2 hard drives that are written to simultaneously, so if one fails the other rebuilds it automatically, and in the case the rebuild process also fails data can still be recovered from the good drive.

I went with the [Syba SY-ENC35028 USB 3.0 3.5" 2-Bay RAID Storage Enclosure](https://www.newegg.com/syba-sy-enc35028/p/N82E16816124081?Item=9SIA6ZP8VG3026) because it was cheap and allowed for a simple USB connection to a computer.  Other cheap options included buying a [RAID1 PCI card](https://www.newegg.com/p/0ZK-08C1-08VR7?Item=9SIAN0VB814360&Description=raid1&cm_re=raid1-_-9SIAN0VB814360-_-Product&quicklink=true) to mount into a desktop computer, but that was too much hassle for me.  

The drives I used were two [2TB Seagate Barracuda's](https://www.newegg.com/seagate-barracuda-st2000dm001-2tb/p/N82E16822178547?Item=9SIAAY99J23547) because they are cheap and still very quiet (watch out for the cheap drives that might be very loud on reads/writes).

However it turns out this Syba drive enclosure had a rediculously noisy fan, so I ended up buying an [after market one](https://www.newegg.com/p/1YF-00EC-000A5?Item=9SIAGHV7E00142) to replace it, which was luckily very quiet.  I also noticed the airflow slits on the Syba enclosure were a bit small for my taste, so I dremeled those to be larger, may or may not be necessary.

Then finally I was able to share the drive on my home network by creating a Windows username, and allowing that username/password to access the drive on my local network.  This is just a bit more secure than letting any ol' hacker on the local network automatically get into my files.
