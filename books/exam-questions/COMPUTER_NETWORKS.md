# Computer Networks — Exam Questions

| Unit | Topic |
|------|-------|
| 1 | [Introduction to Computer Networks](#unit-1-introduction-to-computer-networks) |
| 2 | [Data Communication](#unit-2-data-communication) |
| 3 | [Network Models](#unit-3-network-models) |
| 4 | [Physical Layer](#unit-4-physical-layer) |
| 5 | [Data Link Layer — Error Detection and Correction](#unit-5-data-link-layer--error-detection-and-correction) |
| 6 | [Data Link Layer — Flow and Error Control Protocols](#unit-6-data-link-layer--flow-and-error-control-protocols) |
| 7 | [Data Link Layer — Medium Access Control](#unit-7-data-link-layer--medium-access-control) |
| 8 | [Network Layer — Logical Addressing](#unit-8-network-layer--logical-addressing) |
| 9 | [Network Layer — Routing](#unit-9-network-layer--routing) |
| 10 | [Transport Layer Protocols](#unit-10-transport-layer-protocols) |
| 11 | [Congestion Control and Quality of Service](#unit-11-congestion-control-and-quality-of-service) |
| 12 | [Application Layer — Services and Protocols](#unit-12-application-layer--services-and-protocols) |
| 13 | [Internet and World Wide Web](#unit-13-internet-and-world-wide-web) |
| 14 | [Network Security](#unit-14-network-security) |

---

## Unit 1: Introduction to Computer Networks

**Q1. Define a computer network and list its basic characteristics.**

A computer network is an interconnection of devices sharing resources via wired/wireless media. Its basic characteristics are: Fault Tolerance, Scalability, Quality of Service (QoS), and Security.

**Q2. What are the five components of a data communication system?**

Sender, Receiver, Message, Medium, and Protocol.

**Q3. Distinguish between LAN, MAN, and WAN.**

LAN covers a small area (building/campus), MAN covers a city, and WAN covers large geographic areas like countries or the globe. The Internet is the best example of a WAN.

**Q4. What is the difference between a Hub and a Switch?**

A Hub broadcasts data to all connected devices, wasting bandwidth. A Switch maintains a MAC address table and delivers data only to the intended destination device, increasing efficiency and speed.

**Q5. What is jitter and why does it matter?**

Jitter is the variation in packet arrival time. It degrades quality in real-time audio/video applications because packets arrive unevenly, causing choppy playback.

**Q6. List the four characteristics that determine effectiveness of data communication.**

Delivery (correct destination), Accuracy (no corruption), Timeliness (delivered promptly), Jitter (low variation in arrival time).

**Q7. What is the role of a router in a network?**

A router operates at Layer 3 (Network layer) and forwards packets between different networks based on routing tables. It determines the best path for data transmission and provides security and reliability.

---

## Unit 2: Data Communication

**Q1. Differentiate between bit rate and baud rate.**

Bit rate is the number of bits transmitted per second (measures computer efficiency). Baud rate is the number of signal unit changes per second (determines bandwidth requirement). Baud rate ≤ Bit rate.

**Q2. A signal's power is halved during transmission. Calculate the attenuation in dB.**

Attenuation = 10 × log₁₀(P2/P1) = 10 × log₁₀(0.5) = 10 × (−0.3) = **−3 dB**. (A loss of 3 dB = losing half the power.)

**Q3. What are the three types of transmission impairments? Explain each.**

(1) **Attenuation**: Signal loses energy over distance; amplifiers compensate. (2) **Distortion**: Shape of composite signal changes because frequency components travel at different speeds and arrive at different times. (3) **Noise**: Unwanted signals (thermal, induced, crosstalk, impulse) mix with the original signal.

**Q4. Compare simplex, half-duplex, and full-duplex transmission modes.**

Simplex is one-directional only. Half-duplex allows both directions but not at the same time (walkie-talkie). Full-duplex allows simultaneous two-way communication (telephone).

**Q5. What is SNR and what does a high SNR indicate?**

SNR (Signal-to-Noise Ratio) = Signal Power / Noise Power. A high SNR means the signal is strong relative to noise, indicating better signal quality and less corruption.

**Q6. Distinguish between de facto and de jure standards. Give examples.**

De facto standards emerge from widespread use without formal approval (e.g., early HTTP). De jure standards are formally adopted by recognized bodies (e.g., IEEE 802.3 Ethernet). Most current communication standards are de jure.

**Q7. List seven essential network performance metrics.**

Bandwidth, Throughput, Latency, Packet Loss, Retransmission, Availability (uptime), Connectivity.

---

## Unit 3: Network Models

**Q1. List the seven layers of the OSI model and their PDUs.**

Application (Data), Presentation (Data), Session (Data), Transport (Segment), Network (Packet), Data Link (Frame), Physical (Bits).

**Q2. What are the basic elements of a layered architecture?**

Service (actions a layer provides to the layer above), Protocol (rules for peer-layer communication), and Interface (mechanism for passing messages between adjacent layers).

**Q3. What is encapsulation and why is it important?**

Encapsulation is the process where each layer adds its own header/trailer to the data as it passes downward through the OSI stack. It allows each layer to add control information needed for communication. De-encapsulation at the receiver strips each layer's header as data moves upward.

**Q4. Compare the OSI model with the TCP/IP model.**

OSI has 7 layers; TCP/IP has 4. TCP/IP's Application layer combines OSI's Application, Presentation, and Session layers. TCP/IP's Network Access layer combines OSI's Data Link and Physical layers. OSI is a reference model; TCP/IP is the practical implementation used on the Internet.

**Q5. What type of address is used at each relevant OSI layer?**

Physical layer (none), Data Link (MAC/Physical address), Network (Logical/IP address), Transport (Port address), Session/Presentation/Application (Specific address).

**Q6. Why is a layered architecture needed?**

It reduces design complexity using a divide-and-conquer approach, provides modularity so layers can be changed independently, makes testing easier (each layer can be tested individually), and enables independence between layers.

**Q7. What are the functions of the Presentation layer?**

Translation (converting between different data formats), Encryption (for security/privacy), and Compression (reducing bits for multimedia transmission).

---

## Unit 4: Physical Layer

**Q1. What are the functions of the physical layer?**

Bit representation/encoding, data rate control, synchronization, interface definition, line configuration (point-to-point or multipoint), topology definition, and transmission mode (simplex/half-duplex/full-duplex).

**Q2. Compare twisted pair, coaxial cable, and fiber optic as transmission media.**

Twisted pair is cheapest but most susceptible to interference; coaxial offers better shielding and bandwidth; fiber optic has the highest bandwidth, is immune to electromagnetic interference, but is most expensive. Fiber is used for long-distance/high-bandwidth links.

**Q3. Differentiate between UTP and STP.**

UTP lacks a metal shield and is cheaper, easier to install, but more susceptible to interference. STP has a metallic mesh shield providing better noise immunity and higher data rates, but costs more and has higher attenuation.

**Q4. What is the difference between guided and unguided transmission media?**

Guided media use a physical conductor (wire/cable/fiber) to guide signals. Unguided media transmit signals through air/space without physical conductors (radio waves, microwaves, infrared).

**Q5. What are the different categories of UTP cable and their speeds?**

Cat 1 (telephone, low speed), Cat 2 (4 Mbps), Cat 3 (16 Mbps), Cat 4 (20 Mbps), Cat 5 (200 Mbps), Cat 5e (1 Gbps), Cat 6 (fastest UTP standard, over 1 Gbps).

**Q6. What are the types of fiber optic cable and their use cases?**

Single-mode fiber uses a single ray of light and is used for long-distance communication. Multimode fiber (step-index or graded-index) supports multiple rays and is used for shorter distances like within a building.

**Q7. What factors influence the choice of transmission medium?**

Bandwidth, cost, ease of installation, attenuation characteristics, susceptibility to noise/interference, and distance requirements.

---

## Unit 5: Data Link Layer — Error Detection and Correction

**Q1. What are the functions of the Data Link layer?**

Framing (packaging bits into frames), Physical Addressing (MAC addresses), Synchronization (bit-level sync), Error Control (detect/correct errors), Flow Control (regulate data rate), and Multiple-Access (manage shared medium via CSMA/CD).

**Q2. Explain the three types of errors in data transmission.**

Single-bit error: only one bit changed. Multiple-bit error: two or more non-consecutive bits changed. Burst error: two or more consecutive bits changed. Burst errors are most common in real networks due to noise bursts.

**Q3. Describe the parity check error detection method.**

A parity bit is added so the total count of 1s (including parity) is even (even parity) or odd (odd parity). The receiver counts 1s; if the count doesn't match the expected parity, an error is detected. Simple parity detects odd numbers of bit errors only.

**Q4. How does CRC error detection work?**

CRC uses modulo-2 binary division. The sender appends zeros to the data (equal to degree of generator polynomial) and divides by the generator. The remainder becomes the CRC, which is appended to the data. The receiver divides the received data+CRC by the same generator; a zero remainder means no error.

**Q5. How many redundant bits are needed for a 7-bit data word using Hamming code? Show the calculation.**

Condition: 2^r ≥ m + r + 1. For m = 7: try r = 3: 2^3 = 8 < 7 + 3 + 1 = 11 (not enough). Try r = 4: 2^4 = 16 ≥ 7 + 4 + 1 = 12. So **4 redundant bits** are needed.

**Q6. Where are parity (redundant) bits placed in a Hamming code?**

At positions that are powers of 2: positions 1, 2, 4, 8, 16, etc. All other positions hold data bits. Each redundant bit provides even parity for a specific set of bit positions.

**Q7. How does Hamming code correct errors?**

The receiver recalculates all parity bits. The binary values of failed parity checks form a syndrome. The decimal equivalent of this syndrome gives the position of the erroneous bit, which is then flipped to correct it.

---

## Unit 6: Data Link Layer — Flow and Error Control Protocols

**Q1. What is the difference between flow control and error control?**

Flow control regulates the rate of data transmission to prevent the receiver from being overwhelmed. Error control detects and recovers from transmission errors using acknowledgments, timers, and retransmissions.

**Q2. Compare Stop-and-Wait ARQ, Go-Back-N ARQ, and Selective Repeat ARQ.**

Stop-and-Wait: window=1, simplest but inefficient. Go-Back-N: multiple frames in transit, but on error all frames from error point are retransmitted (wastes bandwidth). Selective Repeat: only the errored frame is retransmitted; most efficient but needs larger receiver buffer.

**Q3. What is the advantage of Selective Repeat over Go-Back-N?**

Selective Repeat only retransmits the specific damaged or lost frame, while Go-Back-N retransmits that frame plus all subsequent frames. This makes Selective Repeat more bandwidth-efficient, especially on noisy channels.

**Q4. Explain the sliding window protocol.**

Both sender and receiver maintain windows (buffers). The sender can transmit multiple frames within its window without waiting for individual ACKs. As ACKs arrive, the window slides forward. This maximizes channel utilization compared to stop-and-wait.

**Q5. What is pipelining in the context of data link protocols?**

Pipelining is sending multiple frames before the ACK for the first frame is received. It improves channel utilization by keeping the channel busy instead of waiting after each frame (as in stop-and-wait).

**Q6. Describe Stop-and-Wait ARQ and its limitations.**

The sender transmits one frame and waits for ACK before sending the next. It uses a timer; if no ACK arrives before timeout, the frame is retransmitted. Frames are numbered 0 and 1 alternately to detect duplicates. Limitation: Very inefficient on high-bandwidth or high-delay links.

**Q7. What is the role of sequence numbers in ARQ protocols?**

Sequence numbers allow the receiver to identify duplicate frames (if an ACK is lost and a frame is retransmitted) and to detect lost frames, ensuring frames are processed in order and without duplication.

---

## Unit 7: Data Link Layer — Medium Access Control

**Q1. Compare Pure ALOHA and Slotted ALOHA.**

Pure ALOHA transmits at any time; vulnerable time = 2Tfr; max efficiency = 18.4%. Slotted ALOHA transmits only at slot boundaries; vulnerable time = Tfr; max efficiency = 36.8%. Slotted ALOHA halves the vulnerable period and doubles efficiency.

**Q2. Explain the three CSMA persistence methods.**

1-Persistent: transmit immediately when idle (greedy, high collision risk). Non-Persistent: wait random time if busy (reduces collisions but wastes bandwidth). p-Persistent: transmit with probability p when idle, wait with probability (1−p), combining the benefits of both.

**Q3. How does CSMA/CD differ from CSMA/CA?**

CSMA/CD (used in wired Ethernet) detects collisions after they occur and aborts transmission immediately. CSMA/CA (used in WiFi) attempts to avoid collisions before they happen using IFS periods, random backoff contention windows, and optional RTS/CTS handshake.

**Q4. What is the vulnerable time in CSMA?**

The vulnerable time in CSMA is the propagation delay — the time it takes for a signal from one station to reach all others. If another station transmits during this window, a collision occurs.

**Q5. What are the steps in CSMA/CD?**

(1) If medium idle, transmit. (2) If busy, wait until idle then transmit. (3) If collision detected during transmission, stop and send jam signal. (4) Wait a random backoff time using binary exponential backoff. (5) Retry.

**Q6. What is the minimum frame size requirement for CSMA/CD and why?**

Frame transmission time Tfr must be at least 2 × Tp (maximum propagation time). This ensures the sender is still transmitting when the collision signal arrives back from the farthest point, allowing detection.

**Q7. Classify multiple access protocols.**

(1) Random Access: ALOHA, CSMA, CSMA/CD, CSMA/CA. (2) Controlled Access: Reservation, Polling, Token Passing. (3) Channelization: FDMA, TDMA, CDMA.

---

## Unit 8: Network Layer — Logical Addressing

**Q1. What is an IP address and what are its two parts?**

An IP address is a logical, numerical address assigned to each device on a network for unique identification. It consists of a network part (identifies the network) and a host part (identifies the specific device within that network).

**Q2. Compare IPv4 and IPv6.**

IPv4 is a 32-bit decimal address (4 octets, dot notation); IPv6 is a 128-bit hexadecimal address (8 groups of 16 bits, colon notation). IPv4 supports ~4.3 billion addresses; IPv6 supports ~3.4 × 10^38. IPv6 includes built-in IPSec, no checksum field, uses multicasting (not broadcasting), and fragmentation is done only by senders.

**Q3. Explain classful IP addressing. What are the five classes?**

Class A (1–126, mask 255.0.0.0): large organizations. Class B (128–191, mask 255.255.0.0): medium organizations. Class C (192–223, mask 255.255.255.0): small organizations. Class D (224–239): multicast. Class E (240–254): reserved/research.

**Q4. Given the address 132.6.17.85, find the network address.**

Address 132.x.x.x is Class B; default mask = 255.255.0.0. Network address = first two octets preserved, last two set to 0 = **132.6.0.0**.

**Q5. What is subnetting? Give the subnetting formula.**

Subnetting divides a single classful network into multiple smaller logical sub-networks by borrowing host bits. Formulae: Number of subnets = 2^n; Usable hosts per subnet = 2^n − 2 (where n = number of borrowed/remaining bits respectively).

**Q6. What is NAT and why is it needed?**

NAT (Network Address Translation) translates private IP addresses to a single public IP address (and back), allowing multiple devices with private addresses to share one public IP. This conserves the limited IPv4 public address space.

**Q7. What is ARP and how does it work?**

ARP (Address Resolution Protocol) resolves a known IP address to the corresponding MAC address on a LAN. The host broadcasts an ARP request ("Who has this IP?"); the device with that IP responds with its MAC address. The mapping is cached in the ARP table.

---

## Unit 9: Network Layer — Routing

**Q1. What is the difference between adaptive and non-adaptive routing algorithms?**

Adaptive (dynamic) routing adjusts routes based on current network conditions (topology, load, delay). Non-adaptive (static) routing uses pre-calculated routes that don't change during operation. Adaptive is more flexible but complex; static is simple but rigid.

**Q2. Explain Distance Vector Routing. What is the count-to-infinity problem?**

Each router maintains a table of distances to all destinations and shares it with neighbors. Routers update tables using the Bellman-Ford equation. The count-to-infinity problem occurs when a link fails and routers keep incrementing the distance to the unreachable node in a loop, taking a long time to converge.

**Q3. How does Link State Routing work?**

Each router floods Link State Packets (containing its link costs) to all other routers. Every router builds a complete map of the network. Each router then runs Dijkstra's algorithm on this map to compute shortest paths to all destinations. It converges faster than distance vector.

**Q4. Compare Distance Vector and Link State routing.**

Distance Vector is simpler to configure and uses less memory; however, it converges slowly, suffers from count-to-infinity, and creates more routing traffic. Link State converges faster and avoids count-to-infinity but requires more CPU and memory (each router stores the entire topology).

**Q5. Describe Dijkstra's shortest path algorithm.**

(1) Set source cost = 0, all others = infinity. (2) Add source to tree. (3) Select nearest unvisited node; add to tree. (4) Update costs of its unvisited neighbors. (5) Repeat steps 3–4 until all nodes are added. Result is the shortest path tree from the source.

**Q6. What is flooding in routing? What are its advantages and disadvantages?**

Flooding sends each incoming packet on all outgoing links except the one it arrived from. Advantage: Simple, extremely robust, guaranteed delivery. Disadvantage: Creates excessive traffic and duplicate packets. Controlled using sequence numbers and hop count.

**Q7. Distinguish between unicast, broadcast, and multicast routing.**

Unicast: one sender to one specific receiver. Broadcast: one sender to all receivers in the network. Multicast: one sender to a specific group of receivers. Anycast sends to the nearest receiver in a group.

---

## Unit 10: Transport Layer Protocols

**Q1. What are the services provided by the transport layer?**

End-to-End delivery, Reliable delivery (error control, sequence control, loss control, duplication control), Flow control (sliding window), Multiplexing (upward and downward), and Addressing (port numbers/TSAPs).

**Q2. Distinguish between connection-oriented and connectionless services.**

Connection-oriented (TCP) establishes a connection before data transfer; all packets follow the same path; provides reliability and ordered delivery (like a telephone). Connectionless (UDP) sends each packet independently on potentially different paths; no guarantee of order or delivery (like postal service); faster and lower overhead.

**Q3. What is multiplexing in the transport layer? Explain upward and downward multiplexing.**

Multiplexing allows multiple processes to share transport resources. Upward multiplexing: multiple transport connections use the same network connection (cost-effective). Downward multiplexing: one transport connection splits across multiple network connections (improves throughput on low-capacity networks).

**Q4. How does the transport layer differ from the data link layer in terms of error control?**

The data link layer provides node-to-node error control (between adjacent nodes on a link). The transport layer provides end-to-end error control across the entire network from source to destination, detecting errors that may be introduced within routers.

**Q5. What is the role of port numbers at the transport layer?**

Port numbers (TSAPs — Transport Service Access Points) identify specific application processes running on a host. They allow multiplexing — multiple applications can communicate over the network simultaneously. Well-known ports: HTTP=80, FTP=21, SMTP=25, DNS=53.

**Q6. Why is flow control important at the transport layer?**

Flow control prevents a fast sender from overwhelming a slow receiver. The transport layer uses the sliding window protocol for this purpose. Without flow control, the receiver would discard excess packets, causing retransmissions and congestion.

**Q7. Why is UDP preferred over TCP for real-time applications?**

UDP has lower overhead (no connection establishment/termination, no ACKs, no retransmissions), which means lower latency. For real-time applications like video streaming or VoIP, a slightly lost packet is better tolerated than delays caused by retransmission.

---

## Unit 11: Congestion Control and Quality of Service

**Q1. What is network congestion and what are its typical effects?**

Congestion occurs when the load on a network exceeds its capacity. Typical effects include: queuing delays at routers, packet loss (buffer overflow), blocking of new connections, and reduced throughput (may decrease even as offered load increases).

**Q2. Distinguish between open-loop and closed-loop congestion control.**

Open-loop control is proactive — it prevents congestion before it occurs (e.g., admission control, retransmission policy). Closed-loop control is reactive — it detects congestion and takes steps to remove it (e.g., backpressure, choke packets, explicit signaling).

**Q3. Explain backpressure and choke packet mechanisms.**

Backpressure is a node-to-node mechanism where a congested node signals its upstream neighbor to slow down; the signal propagates back toward the source. A choke packet is sent directly from the congested node to the source, bypassing intermediate nodes, to inform the source to reduce its transmission rate.

**Q4. What are the traffic profiles used in data networks?**

CBR (Constant Bit Rate): fixed rate, predictable. VBR (Variable Bit Rate): smoothly changing rate with different average and peak values. Bursty: rate changes suddenly, large difference between average and peak (e.g., web traffic).

**Q5. What is QoS and what are its four main parameters?**

QoS (Quality of Service) refers to the ability to provide guaranteed or differentiated service levels. The four parameters are: Delay (end-to-end latency), Jitter (variation in delay), Throughput (data rate), and Error Rate.

**Q6. What is Integrated Services (IntServ)?**

IntServ is an architecture for providing per-flow QoS guarantees in IP networks. Applications signal their resource requirements; routers reserve bandwidth and other resources along the path using RSVP. Routers maintain state for each flow.

**Q7. What is goodput and how does it differ from throughput?**

Goodput is the actual useful data delivered successfully (in = out under ideal conditions). Throughput includes all transmitted data including retransmissions. Retransmissions increase throughput-in but reduce goodput, wasting capacity.

---

## Unit 12: Application Layer — Services and Protocols

**Q1. What is Telnet and how does it work?**

Telnet is an application layer protocol (port 23, TCP) that enables remote login. It uses the NVT (Network Virtual Terminal) concept to translate characters between different systems. The user's Telnet client connects to the remote Telnet server; keystrokes are sent to the remote machine and responses are displayed locally.

**Q2. What is the role of DNS and how does it resolve a domain name?**

DNS (Domain Name System) translates human-readable domain names to IP addresses. When a user types a URL, the browser queries a DNS server. The DNS server looks up its records and returns the corresponding IP address. The browser then contacts the web server at that IP address.

**Q3. Explain the two types of connections used by FTP.**

FTP uses two TCP connections: (1) Control Connection (port 21): remains open for the entire FTP session to exchange commands. (2) Data Connection (port 20): opened for each file transfer and closed when the transfer completes. This separation allows command and data traffic to be handled independently.

**Q4. Compare SMTP, POP3, and IMAP.**

SMTP (port 25) pushes email from sender to recipient's mail server. POP3 (port 110) downloads email from server to client, typically deleting from server. IMAP (port 143) allows managing email on the server; emails remain on server and can be accessed from multiple devices.

**Q5. What is NVT in the context of Telnet?**

NVT (Network Virtual Terminal) is a standard interface defined by Telnet that solves the problem of heterogeneous systems. The client Telnet translates local characters to NVT format; the server Telnet translates NVT format to the remote system's format, enabling communication between different types of computers.

**Q6. What are the advantages and disadvantages of FTP?**

Advantages: Fast file transfer, efficient (partial downloads possible), secure (login required), bidirectional. Disadvantages: Passwords and data sent in cleartext (security risk), 2 GB file size limit, does not support simultaneous transfers to multiple receivers.

**Q7. How does the DNS hierarchy work?**

DNS is hierarchical — at the top are root name servers, below them are TLD (Top-Level Domain) servers (.com, .edu, .in), then authoritative name servers for specific domains. A DNS query traverses this hierarchy: local cache → root server → TLD server → authoritative server → IP address returned.

---

## Unit 13: Internet and World Wide Web

**Q1. How does the Internet work? Describe the process of accessing a website.**

User types URL → browser sends query to DNS server → DNS returns IP address → browser sends HTTP request to web server → server sends data as packets through optical fiber and routers → data arrives at client as electrical signals (Ethernet) or electromagnetic waves (WiFi) → browser displays the page.

**Q2. What is the difference between the Internet and the World Wide Web?**

The Internet is the global infrastructure (physical cables, routers, servers) that connects billions of devices. The WWW is an information system (application) that runs on top of the Internet, using HTTP to deliver hypertext content accessed via web browsers.

**Q3. What is a URL? Explain its structure.**

A URL (Uniform Resource Locator) is a human-readable address that identifies a resource on the Internet. Structure: `protocol://WebSiteName.topLevelDomain/path`. Example: `https://www.example.com/login.html` — HTTPS is the protocol, example is the website name, .com is the TLD, and /login.html is the path.

**Q4. What are the characteristics of HTTP?**

HTTP is IP-based, uses a request-response model between client and server, is stateless (each request is independent, server remembers nothing about client after response), and connectionless (connection closes after each response). Any content type can be transferred if both sides support it.

**Q5. Who governs the Internet? Name the key organizations.**

The Internet has no single authority. Key governing bodies: ICANN (manages IP addresses and domain names), Internet Society (ISOC) (promotes global information exchange), Internet Architecture Board (IAB) (reviews standards), Internet Engineering Task Force (IETF) (addresses operational/technical problems).

**Q6. What is a VPN and what are its benefits?**

A VPN (Virtual Private Network) creates an encrypted, secure tunnel over a public network (Internet), allowing remote users or offices to communicate as if on a private network. Benefits: data security/encryption, privacy, secure remote access, bypassing geographic restrictions.

**Q7. Compare HTTP and HTTPS.**

HTTP transmits data in plaintext, making it vulnerable to eavesdropping. HTTPS adds TLS (Transport Layer Security) encryption to HTTP, ensuring data is encrypted in transit, authenticating the server, and protecting data integrity. HTTPS uses port 443 vs HTTP's port 80.

---

## Unit 14: Network Security

**Q1. What is the CIA triad in cybersecurity? Explain each component.**

The CIA triad is the foundation of information security: **Confidentiality** (protecting data from unauthorized access — tools: encryption, access control, authentication); **Integrity** (ensuring data is accurate and unaltered — tools: checksums, backups, error-correcting codes); **Availability** (ensuring authorized users can access data when needed — tools: redundancy, physical protection).

**Q2. What is the difference between symmetric and asymmetric cryptography?**

Symmetric (secret key) cryptography uses the same key for encryption and decryption; fast but the key must be securely shared between parties. Asymmetric (public key) uses a key pair — data encrypted with the recipient's public key can only be decrypted with their private key; solves the key distribution problem but is slower.

**Q3. What are hash functions? What properties must a cryptographic hash function have?**

A hash function takes an input of any length and produces a fixed-length output (digest). It is a one-way function. Cryptographic hash functions must satisfy: Preimage Resistance (given hash, cannot find input), Second Preimage Resistance (given input and hash, cannot find another input with same hash), and Collision Resistance (computationally infeasible to find any two inputs with same hash).

**Q4. Distinguish between MDC and MAC.**

MDC (Modification Detection Code) is a hash of the message; it proves the message has not been changed but does not authenticate the sender (anyone can compute it). MAC (Message Authentication Code) is a hash of the message concatenated with a shared secret key; it proves both message integrity AND authenticity.

**Q5. What is a firewall? What are its two main security functions?**

A firewall is a hardware/software system that monitors and filters network traffic based on predefined rules, acting as a barrier between a private network and the public Internet. Main functions: (1) Packet filtering (accept/deny based on IP/port rules) and (2) Application proxy gateways (proxy services for inside users, shielding internal hosts).

**Q6. Classify the types of cyber-attacks.**

**Web-based attacks**: Injection, DNS Spoofing, Session Hijacking, Phishing, Brute Force, DoS/DDoS, Dictionary attacks, Man-in-the-Middle. **System-based attacks**: Virus (self-replicating malware), Worm (spreads via network without user action), Trojan Horse (masquerades as legitimate software), Backdoors, Bots.

**Q7. What are the steps in Privacy Enhanced Mail (PEM) and what is PGP?**

PEM steps: (1) Canonical Conversion (standard format). (2) Digital Signature (message digest encrypted with sender's private key). (3) Encryption (message + signature encrypted with symmetric key). (4) Base64 Encoding (binary to ASCII for email compatibility). **PGP** (Pretty Good Privacy) provides confidentiality and authentication for email using SHA-1/MD5 hashing, RSA signatures, and ZIP compression; it uses radix-64 encoding for email compatibility and is free and widely trusted.
