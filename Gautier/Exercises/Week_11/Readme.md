## IoT is here, what could break?

* Cybersecurity 
    - Exploitable
    - Threats

* Lots of attack vectors
    - Networks (on all levels) wired and wireless
    - Embedded systems
        * Scooters <- hardware hacks
        * Hue lights
        * IR hacking

* Flipper Zero - Pen testing - NFC/Rfid

* Fragmentation

* Usually no updates

* Routers
    - admin/admin

* No encryption

* Responsibility and ownership of devices

## Threats

Common threats:

1. Zombie webcams (default password threat)

https://www.cisa.gov/news-events/alerts/2013/06/24/risks-default-passwords-internet#:~:text=Attackers%20can%20easily%20identify%20and,to%20critical%20and%20important%20systems. 

2. Deauth attack

3. Krack attack

https://www.krackattacks.com/

4. Cyber abuse
    
For instance, a toxic person could spy on their partner or abuse them psychologically and physically by controlling connected devices at home, using trackers to stalk them etc.

5. Man in the Middle

Use certificates to deter anyone spoofing a connection to some legitimate server.
Certificates are memory intensive therefore they're unusable on small devices like the D1 Mini we use in class.

Counter measures:
- Layered architectures
- Avoid wireless
- Active community (supporting and auditing soft/hardware)
- Opensource core infrastructure --> easier to audit and update
- Build security into life cycle management + maintenance

## Hardening in practice

Fixes:

- Software updates
- Remote wipe (in case hardware is stolen)
- Use last safety standards
- Upgrade legacy systems whenever possible
- Very secure internet connection via gateway with latest encryption protocols
- Raise awareness (teach kids in IT classes the best practices using connected devices)
- Connect several gateways to a a main gateway to isolate array of clients on subnetworks.
- Implement certificate validation on ESP32s
- Encrypt all data on the WiFi network
- Harden SSH access with SSH keys rather than passwords
- Close all outside ports only let access to SSH
- Tunneling (VPN) --> WireGuard: https://www.wireguard.com/ 