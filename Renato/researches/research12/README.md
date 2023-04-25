# Research records 12

## Internet of Broken things

How could anything go wrong?
● From your head and Google/Chat.GPT (5 min):
– What did already break (is broken)?
– What will break?
– Why?


Many things can go wrong when we start connecting so many devices together. From safety to security, from not enough infrastructure. 

- Lots of attack vectors: - Network on all levels.
- Scooters: hadrware hacks
- Hue lights.
- Flipperzero - pen testing NFC/Rfid
- Fragmentation
- Rounters
- Lots of single point of failure - on cloud service.
- Social engineering
- Devices are too powerful
- Responsibility and ownership of devices (what happens in updates?)

- No encryption


## Video on IoT Security and Home Automation
https://youtu.be/weENQHDfdmU

● Google the threats
(and write down notes in portfolio about it)
● Reflect on the threats. Do you think that they are still valid?

- Main causes of brakege. Star topology.No layered security.
- Many desvices on the same networks as personal devices.
- Use of default passwords.

Case of Zombie Webcams. Webcam atack a website.

### Deauth Attack 
- Takes down the network and 
- WIFI IEEE 802.11w
- Countless denial of service attacks possible.

### Krack Attack
All data of clients can be read on public WIFI. 


Counter Measures
 Layered architectures
 Avoid wireless
 Active and aware community


 Openness about core infrastructure is easier to audit and update. 

 Build security into life cycle management and maintenance.

● (After) Start searching on more threats and (if existing)
countermeasures.

### CYber Abuse
 - Usually domestic
 - IoT opens more possibility of these abuses
 spy, control house things, prevented transactions

 ### Man in the Middle attack

 Certificates validation. A trusted validation.  
 Most embended devices don't have the memory resources for certificate validations. 


### Hardening in Practice

● What fixes could we implement in IoTempower (and our setups)
● What fixes in general?

Very secure internet connection via gate with firewalls and the latest encryption. 
Raise awareness

Meshwork of gateways - batman. 
Encrypt communication inside the local network. From device to device. Node to node.
SSH with public key. Close all the outside port. Harden the SSH port. 


Prompt a default password change on first login (good bacholers thesis)
Biometrics authentication (master thesis)

Make network exclusive -  symmetric encryption, full encryption. 2 factor auth. 
Use VPN - **wire guard** fall devices. 

SSL on the ESP32. but not optimal. 
TLS need a 3rd. 
How to run a local central authority on the gateway?


Have documentation of all the ports and links of how to harden them.

White list devices. 
WPA3 - try to use new standards. 

Trusted elements. 
Remote wipe. 
Pigent one wire.

Mesh security level for different architecture. More different type of network architecture. More levels of security zoning.

Cloudflare tunnel for remote access to the gateway. Mqtt borker, SSH etc. 

Caddy and Host own CA. 