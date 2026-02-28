# Computer Networks — Comprehensive Exam Preparation Guide

## Overall Book Summary

This book covers the full stack of computer networking, from physical transmission media at the bottom to application-layer services and network security at the top. It follows the OSI and TCP/IP layered models as an organizing framework. Key themes include:

- **Network fundamentals**: what networks are, how they are classified, and the basic components of communication.
- **Data communication**: signals, transmission modes, performance metrics, and impairments.
- **Network models**: the 7-layer OSI model and the 4-layer TCP/IP model, with the role and PDU of each layer.
- **Physical layer**: transmission media (wired and wireless) and networking hardware.
- **Data link layer** (three units): error detection and correction, flow control protocols (stop-and-wait, sliding window), and medium access control (ALOHA, CSMA, CSMA/CD, CSMA/CA).
- **Network layer**: IP addressing (IPv4/IPv6, classful addressing, subnetting), routing algorithms (distance-vector, link-state), and unicast/multicast/broadcast routing.
- **Transport layer**: TCP vs UDP, connection-oriented vs connectionless services, multiplexing.
- **Congestion and QoS**: causes of congestion, open/closed-loop control, Quality of Service.
- **Application layer**: protocols — Telnet, FTP, DNS, SMTP, POP3, IMAP.
- **Internet and WWW**: how the internet works, HTTP, HTTPS, URI/URL, VPN.
- **Network security**: CIA triad, cyber-attacks, cryptography (symmetric, asymmetric, hash functions), firewalls, PGP, PEM, email security.

---

## Table of Contents

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

### Summary
Introduces the concept of computer networks, communication, components of a data communication system, types of networks (LAN, MAN, WAN), topologies, and the characteristics of effective communication. Covers basic networking hardware (NIC, Hub, Switch, Router, Modem) and applications of computer networks.

### Key Definitions and Concepts

- **Computer Network**: An interconnection of devices that share hardware, software, and data through wired or wireless media.
- **Data Communication**: Transmission of digital data (text, audio, video, graphics) between two or more computers via wired or wireless media.
- **Components of Data Communication System**:
  - **Sender**: Device that generates and sends a message.
  - **Receiver**: Device that receives the message.
  - **Message**: Information to be communicated (text, audio, video, graphics, animation).
  - **Medium**: Channel (wired/wireless) through which message travels.
  - **Protocol**: Rules governing communication between sender and receiver.
- **Characteristics of Computer Networks**:
  - **Fault Tolerance**: Ability to continue working despite failures; alternative paths are used.
  - **Scalability**: Ability to grow while maintaining good performance.
  - **Quality of Service (QoS)**: Ability to set priorities and manage data traffic.
  - **Security**: Preventing unauthorized access; ensuring confidentiality, integrity, availability.
- **Effectiveness of Data Communication** depends on:
  - **Delivery**: Data reaches the correct destination.
  - **Accuracy**: Data is uncorrupted.
  - **Timeliness**: Data is delivered on time (real-time).
  - **Jitter**: Variation in packet arrival time (uneven delay).
- **Types of Networks**:
  - **LAN** (Local Area Network): Small geographic area (building, campus).
  - **MAN** (Metropolitan Area Network): City-wide.
  - **WAN** (Wide Area Network): Large geographic area (country, world). Example: the Internet.
- **Network Topologies**: Bus, Star, Ring, Mesh, Hybrid.
- **Networking Devices**:
  - **NIC** (Network Interface Card): Hardware to connect a computer to a network; has a unique MAC address.
  - **Hub**: Broadcasts data to all connected devices; obsolete.
  - **Switch**: Forwards data only to the correct destination using MAC address table.
  - **Router**: Connects different networks; operates at Layer 3; forwards packets using routing tables.
  - **Modem** (Modulator/Demodulator): Converts digital data to analog for telephone lines and vice versa.

### Key Formulas / Algorithms
- None specific to this unit.

### Likely Exam Questions

**Q1. Define a computer network and list its basic characteristics.**
**A:** A computer network is an interconnection of devices sharing resources via wired/wireless media. Its basic characteristics are: Fault Tolerance, Scalability, Quality of Service (QoS), and Security.

**Q2. What are the five components of a data communication system?**
**A:** Sender, Receiver, Message, Medium, and Protocol.

**Q3. Distinguish between LAN, MAN, and WAN.**
**A:** LAN covers a small area (building/campus), MAN covers a city, and WAN covers large geographic areas like countries or the globe. The Internet is the best example of a WAN.

**Q4. What is the difference between a Hub and a Switch?**
**A:** A Hub broadcasts data to all connected devices, wasting bandwidth. A Switch maintains a MAC address table and delivers data only to the intended destination device, increasing efficiency and speed.

**Q5. What is jitter and why does it matter?**
**A:** Jitter is the variation in packet arrival time. It degrades quality in real-time audio/video applications because packets arrive unevenly, causing choppy playback.

**Q6. List the four characteristics that determine effectiveness of data communication.**
**A:** Delivery (correct destination), Accuracy (no corruption), Timeliness (delivered promptly), Jitter (low variation in arrival time).

**Q7. What is the role of a router in a network?**
**A:** A router operates at Layer 3 (Network layer) and forwards packets between different networks based on routing tables. It determines the best path for data transmission and provides security and reliability.

---

## Unit 2: Data Communication

### Summary
Covers signal classification (periodic vs non-periodic, analog vs digital), transmission modes (simplex, half-duplex, full-duplex), network performance metrics (bandwidth, throughput, latency, packet loss, retransmission, availability, connectivity), transmission impairments (attenuation, distortion, noise), protocols, and network standards organizations.

### Key Definitions and Concepts

- **Analog Signal**: Continuous signal with infinite values (e.g., voice).
- **Digital Signal**: Signal with discrete values (e.g., 0 and 1). If a signal has L levels, each level needs log₂L bits.
- **Bit Rate**: Number of bits transmitted per second (bps).
- **Baud Rate**: Number of signal changes (symbols) per second. Baud rate ≤ bit rate.
- **Bit Length**: Distance one bit occupies on the transmission medium.
- **Transmission Modes**:
  - **Simplex**: One-way communication only (e.g., keyboard to monitor).
  - **Half-Duplex**: Both directions but not simultaneously (e.g., walkie-talkie). Channel capacity = Bandwidth × Propagation Delay.
  - **Full-Duplex**: Both directions simultaneously (e.g., telephone). Channel capacity = 2 × Bandwidth × Propagation Delay.
- **Network Performance Metrics**: Bandwidth, Throughput, Latency, Packet Loss, Retransmission, Availability (uptime), Connectivity.
- **Transmission Impairments**:
  - **Attenuation**: Loss of signal energy over distance. Measured in decibels (dB).
  - **Distortion**: Change in shape of composite signals due to different propagation speeds of frequency components.
  - **Noise**: Unwanted signals that corrupt data — induced noise, crosstalk, thermal noise, impulse noise.
- **Signal-to-Noise Ratio (SNR)**: SNR = Average Signal Power / Average Noise Power. Higher SNR = less corrupted signal.
- **Protocols**: Set of rules governing timing, format, and mechanisms of communication. Components: Syntax (format), Semantics (meaning), Timing.
- **Standards Types**:
  - **De facto**: Standards adopted by widespread use without formal approval (e.g., early HTTP).
  - **De jure**: Standards adopted through legislation by recognized bodies.
- **Standards Organizations**: ISO, ITU, IEEE, ANSI, IRTF, EIA, W3C.

### Key Formulas

- Bit Length = Propagation Speed × Bit Duration
- Attenuation (dB) = 10 × log₁₀(P2/P1)  (negative value = loss, positive = gain)
- SNR_dB = 10 × log₁₀(Signal Power / Noise Power)
- If signal has L levels: bits per level = log₂L
- Half-duplex channel capacity = Bandwidth × Propagation Delay
- Full-duplex channel capacity = 2 × Bandwidth × Propagation Delay

### Likely Exam Questions

**Q1. Differentiate between bit rate and baud rate.**
**A:** Bit rate is the number of bits transmitted per second (measures computer efficiency). Baud rate is the number of signal unit changes per second (determines bandwidth requirement). Baud rate ≤ Bit rate.

**Q2. A signal's power is halved during transmission. Calculate the attenuation in dB.**
**A:** Attenuation = 10 × log₁₀(P2/P1) = 10 × log₁₀(0.5) = 10 × (−0.3) = **−3 dB**. (A loss of 3 dB = losing half the power.)

**Q3. What are the three types of transmission impairments? Explain each.**
**A:** (1) **Attenuation**: Signal loses energy over distance; amplifiers compensate. (2) **Distortion**: Shape of composite signal changes because frequency components travel at different speeds and arrive at different times. (3) **Noise**: Unwanted signals (thermal, induced, crosstalk, impulse) mix with the original signal.

**Q4. Compare simplex, half-duplex, and full-duplex transmission modes.**
**A:** Simplex is one-directional only. Half-duplex allows both directions but not at the same time (walkie-talkie). Full-duplex allows simultaneous two-way communication (telephone).

**Q5. What is SNR and what does a high SNR indicate?**
**A:** SNR (Signal-to-Noise Ratio) = Signal Power / Noise Power. A high SNR means the signal is strong relative to noise, indicating better signal quality and less corruption.

**Q6. Distinguish between de facto and de jure standards. Give examples.**
**A:** De facto standards emerge from widespread use without formal approval (e.g., early HTTP). De jure standards are formally adopted by recognized bodies (e.g., IEEE 802.3 Ethernet). Most current communication standards are de jure.

**Q7. List seven essential network performance metrics.**
**A:** Bandwidth, Throughput, Latency, Packet Loss, Retransmission, Availability (uptime), Connectivity.

---

## Unit 3: Network Models

### Summary
Covers layered architecture principles, the OSI 7-layer model (functions, PDUs, address types for each layer), the TCP/IP model (4 layers), differences between OSI and TCP/IP, encapsulation/de-encapsulation, and types of internet addresses.

### Key Definitions and Concepts

- **Layered Architecture**: Divides communication into manageable layers; each lower layer provides services to the layer above it.
- **Basic Elements**:
  - **Service**: What a layer does for the layer above it.
  - **Protocol**: Rules for communication between peer layers on different machines.
  - **Interface**: How a message is passed between adjacent layers.
- **Benefits of Layering**: Divide-and-conquer approach, modularity, easy modification, easy testing.
- **OSI Model** (Open Systems Interconnection): 7-layer reference model developed by ISO in 1984.

| Layer No. | Layer Name       | PDU     | Data Flow       | Address Used     |
|-----------|------------------|---------|-----------------|------------------|
| 7         | Application      | Data    | —               | Specific Address |
| 6         | Presentation     | Data    | —               | Specific Address |
| 5         | Session          | Data    | —               | Specific Address |
| 4         | Transport        | Segment | Process-to-Process | Port Address  |
| 3         | Network          | Packet  | End-to-End      | Logical (IP) Address |
| 2         | Data Link        | Frame   | Hop-to-Hop      | Physical (MAC) Address |
| 1         | Physical         | Bits    | —               | — |

- **Layer Functions**:
  - **Application**: User interface, FTAM, mail services, directory services. Protocols: HTTP, SMTP, DNS, FTP, TELNET, SNMP.
  - **Presentation**: Translation, encryption, compression. Also called the syntax layer.
  - **Session**: Dialog control (half/full-duplex), synchronization (checkpoints).
  - **Transport**: End-to-end delivery, error control, sequence control, loss control, duplication control, flow control, multiplexing. Protocols: TCP, UDP.
  - **Network**: Logical addressing, routing, packet forwarding. Protocol: IP.
  - **Data Link**: Framing, physical addressing, synchronization, error control, flow control, multiple access.
  - **Physical**: Bit transmission, signal encoding, data rate, synchronization.
- **Encapsulation**: At the sender, each layer adds its own header (and sometimes trailer) to data as it passes down.
- **De-encapsulation**: At the receiver, each layer strips its header as data passes up.
- **TCP/IP Model**: 4 layers — Application (combines OSI layers 5–7), Transport, Internet, Network Access (combines OSI layers 1–2).
- **Types of Internet Addresses**: Specific address (application), Port address (transport), Logical/IP address (network), Physical/MAC address (data link).

### Key Formulas / Algorithms
- None specific (conceptual unit).

### Likely Exam Questions

**Q1. List the seven layers of the OSI model and their PDUs.**
**A:** Application (Data), Presentation (Data), Session (Data), Transport (Segment), Network (Packet), Data Link (Frame), Physical (Bits).

**Q2. What are the basic elements of a layered architecture?**
**A:** Service (actions a layer provides to the layer above), Protocol (rules for peer-layer communication), and Interface (mechanism for passing messages between adjacent layers).

**Q3. What is encapsulation and why is it important?**
**A:** Encapsulation is the process where each layer adds its own header/trailer to the data as it passes downward through the OSI stack. It allows each layer to add control information needed for communication. De-encapsulation at the receiver strips each layer's header as data moves upward.

**Q4. Compare the OSI model with the TCP/IP model.**
**A:** OSI has 7 layers; TCP/IP has 4. TCP/IP's Application layer combines OSI's Application, Presentation, and Session layers. TCP/IP's Network Access layer combines OSI's Data Link and Physical layers. OSI is a reference model; TCP/IP is the practical implementation used on the Internet.

**Q5. What type of address is used at each relevant OSI layer?**
**A:** Physical layer (none), Data Link (MAC/Physical address), Network (Logical/IP address), Transport (Port address), Session/Presentation/Application (Specific address).

**Q6. Why is a layered architecture needed?**
**A:** It reduces design complexity using a divide-and-conquer approach, provides modularity so layers can be changed independently, makes testing easier (each layer can be tested individually), and enables independence between layers.

**Q7. What are the functions of the Presentation layer?**
**A:** Translation (converting between different data formats), Encryption (for security/privacy), and Compression (reducing bits for multimedia transmission).

---

## Unit 4: Physical Layer

### Summary
Covers the functions of the physical layer, types of transmission media (guided: twisted pair, coaxial cable, fiber optic; unguided: radio waves, microwaves, infrared), characteristics of each medium, and networking devices at this layer (repeaters, hubs).

### Key Definitions and Concepts

- **Physical Layer**: Lowest OSI layer; responsible for transmitting raw bits over a physical medium. Deals with setup of physical connection and transmission/reception of signals.
- **Functions**: Bit representation, data rate, synchronization, interface, line configuration (point-to-point/multipoint), topologies, transmission modes.
- **Transmission Media**: Physical path between transmitter and receiver.
  - **Guided (Wired) Media**: Signal travels through a physical conductor.
  - **Unguided (Wireless) Media**: Signal travels through air/space.
- **Guided Media Types**:
  - **Twisted Pair**: Two insulated copper wires twisted together. Cheap, easy to install.
    - **UTP** (Unshielded Twisted Pair): Categories 1–6; Cat 5e supports up to 1 Gbps; Cat 6 is fastest standard for UTP.
    - **STP** (Shielded Twisted Pair): Has mesh shield; supports 10–100 Mbps; max 100 m.
    - Connector: RJ45.
  - **Coaxial Cable**: Central conductor surrounded by insulation, metallic shield, and plastic cover.
    - **Baseband**: Digital signaling; single channel.
    - **Broadband**: Analog signaling; multiple channels.
  - **Fiber Optic**: Glass/plastic fibers carrying light pulses; very high bandwidth, immune to interference.
    - **Single Mode**: Single ray of light; used for long distances.
    - **Multimode**: Multiple rays; used for shorter distances.
    - Step-index and Graded-index variants.
- **Unguided Media**:
  - **Radio Waves**: Omnidirectional; used in broadcast radio, WiFi.
  - **Microwaves**: Unidirectional; used for satellite/cellular.
  - **Infrared**: Short-range; cannot penetrate walls (TV remotes, IrDA).
- **Factors Affecting Transmission Media**: Bandwidth, transmission impairment (attenuation, distortion, noise, interference), cost.

### Key Formulas / Algorithms
- None specific beyond those in Unit 2.

### Likely Exam Questions

**Q1. What are the functions of the physical layer?**
**A:** Bit representation/encoding, data rate control, synchronization, interface definition, line configuration (point-to-point or multipoint), topology definition, and transmission mode (simplex/half-duplex/full-duplex).

**Q2. Compare twisted pair, coaxial cable, and fiber optic as transmission media.**
**A:** Twisted pair is cheapest but most susceptible to interference; coaxial offers better shielding and bandwidth; fiber optic has the highest bandwidth, is immune to electromagnetic interference, but is most expensive. Fiber is used for long-distance/high-bandwidth links.

**Q3. Differentiate between UTP and STP.**
**A:** UTP lacks a metal shield and is cheaper, easier to install, but more susceptible to interference. STP has a metallic mesh shield providing better noise immunity and higher data rates, but costs more and has higher attenuation.

**Q4. What is the difference between guided and unguided transmission media?**
**A:** Guided media use a physical conductor (wire/cable/fiber) to guide signals. Unguided media transmit signals through air/space without physical conductors (radio waves, microwaves, infrared).

**Q5. What are the different categories of UTP cable and their speeds?**
**A:** Cat 1 (telephone, low speed), Cat 2 (4 Mbps), Cat 3 (16 Mbps), Cat 4 (20 Mbps), Cat 5 (200 Mbps), Cat 5e (1 Gbps), Cat 6 (fastest UTP standard, over 1 Gbps).

**Q6. What are the types of fiber optic cable and their use cases?**
**A:** Single-mode fiber uses a single ray of light and is used for long-distance communication. Multimode fiber (step-index or graded-index) supports multiple rays and is used for shorter distances like within a building.

**Q7. What factors influence the choice of transmission medium?**
**A:** Bandwidth, cost, ease of installation, attenuation characteristics, susceptibility to noise/interference, and distance requirements.

---

## Unit 5: Data Link Layer — Error Detection and Correction

### Summary
Covers functions of the Data Link layer (framing, physical addressing, synchronization, error control, flow control, multiple access), framing methods, types of errors (single-bit, multiple-bit, burst), error detection methods (parity check, CRC, checksum), and error correction using Hamming code.

### Key Definitions and Concepts

- **Data Link Layer**: Layer 2 of OSI; transforms raw bits into error-free data frames for the network layer.
- **Two main sublayers**:
  - **LLC** (Logical Link Control): Framing, flow control, error control, software protocols.
  - **MAC** (Media Access Control): Shared medium access control.
- **Functions**: Framing, Physical Addressing, Synchronization, Error Control, Flow Control, Multiple-Access.
- **Framing Methods**:
  - **Character count**: Header field specifies number of characters.
  - **Flag bytes with byte stuffing**: Special 8-bit flag marks start/end; escape characters inserted if flag pattern appears in data.
  - **Bit stuffing**: Flag is 01111110; a 0 is inserted after every five consecutive 1s in data.
  - **Physical layer coding violations**: Uses invalid line codes as delimiters.
- **Types of Errors**:
  - **Single-bit error**: Only one bit is changed.
  - **Multiple-bit error**: Two or more non-consecutive bits changed.
  - **Burst error**: Two or more consecutive bits changed.
- **Error Detection Methods**:
  - **Parity Check**: Extra parity bit makes total 1s even (even parity) or odd (odd parity). Simple but detects only odd numbers of errors.
  - **Two-Dimensional Parity**: Adds parity for both rows and columns; can detect and correct certain errors.
  - **CRC** (Cyclic Redundancy Check): Based on binary (modulo-2) division. Uses polynomial divisor. Powerful burst error detection.
  - **Checksum**: Data divided into equal sections; sections added using one's complement; result complemented = checksum. Used in higher-layer protocols.
- **Error Correction**:
  - **Block codes**: Message divided into fixed blocks; redundant bits added.
  - **Convolutional codes**: Sliding Boolean function applied to data stream.
- **Hamming Code**: Block code capable of detecting up to 2-bit errors and correcting 1-bit errors.
  - Redundant bits placed at positions that are powers of 2: 1, 2, 4, 8, 16, …
  - Number of redundant bits r must satisfy: **2^r ≥ m + r + 1** (where m = data bits).
  - Each parity bit covers specific data bit positions.
  - Error location = decimal value of the syndrome (binary string formed by recalculated parity bits).

### Key Formulas

- **Hamming Code redundancy**: 2^r ≥ m + r + 1
  - For m = 7 (ASCII), minimum r = 4 (since 2^4 = 16 ≥ 7 + 4 + 1 = 12).
- **Parity bit positions in Hamming Code**: 2^0 = 1, 2^1 = 2, 2^2 = 4, 2^3 = 8, …
- **CRC check**: Append (r−1) zeros to message; divide by generator polynomial using modulo-2 division; remainder is the CRC.

### Likely Exam Questions

**Q1. What are the functions of the Data Link layer?**
**A:** Framing (packaging bits into frames), Physical Addressing (MAC addresses), Synchronization (bit-level sync), Error Control (detect/correct errors), Flow Control (regulate data rate), and Multiple-Access (manage shared medium via CSMA/CD).

**Q2. Explain the three types of errors in data transmission.**
**A:** Single-bit error: only one bit changed. Multiple-bit error: two or more non-consecutive bits changed. Burst error: two or more consecutive bits changed. Burst errors are most common in real networks due to noise bursts.

**Q3. Describe the parity check error detection method.**
**A:** A parity bit is added so the total count of 1s (including parity) is even (even parity) or odd (odd parity). The receiver counts 1s; if the count doesn't match the expected parity, an error is detected. Simple parity detects odd numbers of bit errors only.

**Q4. How does CRC error detection work?**
**A:** CRC uses modulo-2 binary division. The sender appends zeros to the data (equal to degree of generator polynomial) and divides by the generator. The remainder becomes the CRC, which is appended to the data. The receiver divides the received data+CRC by the same generator; a zero remainder means no error.

**Q5. How many redundant bits are needed for a 7-bit data word using Hamming code? Show the calculation.**
**A:** Condition: 2^r ≥ m + r + 1. For m = 7: try r = 3: 2^3 = 8 < 7 + 3 + 1 = 11 (not enough). Try r = 4: 2^4 = 16 ≥ 7 + 4 + 1 = 12. So **4 redundant bits** are needed.

**Q6. Where are parity (redundant) bits placed in a Hamming code?**
**A:** At positions that are powers of 2: positions 1, 2, 4, 8, 16, etc. All other positions hold data bits. Each redundant bit provides even parity for a specific set of bit positions.

**Q7. How does Hamming code correct errors?**
**A:** The receiver recalculates all parity bits. The binary values of failed parity checks form a syndrome. The decimal equivalent of this syndrome gives the position of the erroneous bit, which is then flipped to correct it.

---

## Unit 6: Data Link Layer — Flow and Error Control Protocols

### Summary
Covers flow control mechanisms (Stop-and-Wait, Sliding Window), error control (ARQ: Stop-and-Wait ARQ, Go-Back-N ARQ, Selective Repeat ARQ), line discipline (ENQ/ACK, Poll/Select), and protocols for noiseless (Simplest Protocol, Stop-and-Wait) and noisy channels.

### Key Definitions and Concepts

- **Flow Control**: Procedures to restrict the amount of data a sender can send before receiving an acknowledgment; prevents receiver overflow.
- **Error Control**: Mechanisms to detect and recover from errors; uses ACK, NACK, and retransmission.
- **Noiseless Channel Protocols**:
  - **Simplest Protocol**: No flow or error control; sender transmits continuously.
  - **Stop-and-Wait Protocol (noiseless)**: Sender sends one frame, waits for ACK before sending next. Adds flow control but no error control.
- **Noisy Channel Protocols (ARQ - Automatic Repeat Request)**:
  - **Stop-and-Wait ARQ**: Sender window = 1. Sends one frame, waits for ACK/NACK; uses timer; sequence numbers 0 and 1 (modulo-2). Advantage: Simple. Disadvantage: Inefficient.
    - Utilization = l / (l + bR), where l = frame length, b = bit rate, R = round-trip time.
  - **Go-Back-N ARQ (Sliding Window)**: Sender can have multiple unacknowledged frames (window size = 2^n − 1). If a frame is damaged/lost, receiver sends NAK for that frame and discards all subsequent frames. Sender retransmits from the erroneous frame onwards. More efficient but wastes bandwidth on retransmission.
  - **Selective Repeat ARQ**: Only the damaged/lost frame is retransmitted. Receiver accepts and buffers out-of-order frames. Most efficient but requires larger receiver buffer.
- **Sliding Window**: Sender and receiver maintain windows. Sender shrinks from left as frames are sent; expands from right as ACKs are received. Uses modulo-n sequence numbers.
- **Line Discipline**:
  - **ENQ/ACK**: For dedicated point-to-point links; determines which device starts transmitting.
  - **Poll/Select**: For multipoint connections; primary controls secondaries. Select = primary sends to secondary (downstream). Poll = primary solicits from secondary (upstream).

### Key Formulas

- **Stop-and-Wait ARQ utilization**: U = l / (l + bR)
- **Sender window size for Go-Back-N**: 2^n − 1 (n = sequence number bits)
- **Sender window size for Selective Repeat**: 2^(n−1)
- **Sequence number range**: 0 to 2^n − 1

### Likely Exam Questions

**Q1. What is the difference between flow control and error control?**
**A:** Flow control regulates the rate of data transmission to prevent the receiver from being overwhelmed. Error control detects and recovers from transmission errors using acknowledgments, timers, and retransmissions.

**Q2. Compare Stop-and-Wait ARQ, Go-Back-N ARQ, and Selective Repeat ARQ.**
**A:** Stop-and-Wait: window=1, simplest but inefficient. Go-Back-N: multiple frames in transit, but on error all frames from error point are retransmitted (wastes bandwidth). Selective Repeat: only the errored frame is retransmitted; most efficient but needs larger receiver buffer.

**Q3. What is the advantage of Selective Repeat over Go-Back-N?**
**A:** Selective Repeat only retransmits the specific damaged or lost frame, while Go-Back-N retransmits that frame plus all subsequent frames. This makes Selective Repeat more bandwidth-efficient, especially on noisy channels.

**Q4. Explain the sliding window protocol.**
**A:** Both sender and receiver maintain windows (buffers). The sender can transmit multiple frames within its window without waiting for individual ACKs. As ACKs arrive, the window slides forward. This maximizes channel utilization compared to stop-and-wait.

**Q5. What is pipelining in the context of data link protocols?**
**A:** Pipelining is sending multiple frames before the ACK for the first frame is received. It improves channel utilization by keeping the channel busy instead of waiting after each frame (as in stop-and-wait).

**Q6. Describe Stop-and-Wait ARQ and its limitations.**
**A:** The sender transmits one frame and waits for ACK before sending the next. It uses a timer; if no ACK arrives before timeout, the frame is retransmitted. Frames are numbered 0 and 1 alternately to detect duplicates. Limitation: Very inefficient on high-bandwidth or high-delay links.

**Q7. What is the role of sequence numbers in ARQ protocols?**
**A:** Sequence numbers allow the receiver to identify duplicate frames (if an ACK is lost and a frame is retransmitted) and to detect lost frames, ensuring frames are processed in order and without duplication.

---

## Unit 7: Data Link Layer — Medium Access Control

### Summary
Covers sublayers of the data link layer (LLC and MAC), multiple access protocols (Random Access, Controlled Access, Channelization), ALOHA (Pure and Slotted), CSMA, CSMA/CD, and CSMA/CA.

### Key Definitions and Concepts

- **MAC** (Medium Access Control): Sublayer of Data Link; allocates access to shared medium; controls who transmits when.
- **LLC** (Logical Link Control): Handles framing, flow control, error control for node-to-node communication.
- **Multiple Access Protocols** — three categories:
  - **Random Access Protocols**: All stations have equal priority; collision possible.
  - **Controlled Access Protocols**: Stations take turns; includes Reservation, Polling, Token Passing.
  - **Channelization Protocols**: Divide bandwidth among stations — FDMA (frequency), TDMA (time), CDMA (code).
- **ALOHA**: Earliest random access protocol (developed at Univ. of Hawaii, early 1970s).
  - **Pure ALOHA**: Transmit whenever data is ready; wait for ACK; if collision, wait random back-off time (TB = R × TP) and retransmit. Vulnerable time = 2 × Tfr. Max efficiency ≈ 18.4% (at G = 0.5).
  - **Slotted ALOHA**: Time divided into slots = Tfr; station can only transmit at start of a slot. Vulnerable time = Tfr. Max efficiency ≈ 36.8% (at G = 1). Doubles Pure ALOHA efficiency.
- **CSMA** (Carrier Sense Multiple Access): "Sense before transmit." Station checks if medium is idle before transmitting; reduces collisions but cannot eliminate them (due to propagation delay). Vulnerable time = propagation time.
- **CSMA Persistence Methods**:
  - **1-Persistent**: If idle, transmit immediately. High collision probability if multiple stations waiting.
  - **Non-Persistent**: If busy, wait a random time then sense again. Reduces collisions but wastes bandwidth.
  - **p-Persistent**: If idle, transmit with probability p or wait one slot with probability (1−p). Balance between 1-persistent and non-persistent.
- **CSMA/CD** (Collision Detection): Station monitors channel during transmission; if collision detected, stops immediately (jam signal), waits random time (binary exponential backoff), then retransmits. Used in wired Ethernet. Requirement: Tfr ≥ 2 × Tp.
- **CSMA/CA** (Collision Avoidance): Used in wireless networks (WiFi). Uses Interframe Space (IFS), Contention Window, and ACKs to avoid collisions. RTS/CTS mechanism reserves the channel.
  - DIFS (Distributed IFS): Wait before transmitting.
  - SIFS (Short IFS): Used before sending ACK (SIFS < DIFS).

### Key Formulas

- **Pure ALOHA throughput**: S = G × e^(−2G), maximum at G = 0.5, S_max ≈ 18.4%
- **Slotted ALOHA throughput**: S = G × e^(−G), maximum at G = 1, S_max ≈ 36.8%
- **Pure ALOHA vulnerable time** = 2 × Tfr
- **Slotted ALOHA vulnerable time** = Tfr
- **Back-off time**: TB = R × TP, where R is random number in [0, 2^k − 1], k = number of retransmission attempts.

### Likely Exam Questions

**Q1. Compare Pure ALOHA and Slotted ALOHA.**
**A:** Pure ALOHA transmits at any time; vulnerable time = 2Tfr; max efficiency = 18.4%. Slotted ALOHA transmits only at slot boundaries; vulnerable time = Tfr; max efficiency = 36.8%. Slotted ALOHA halves the vulnerable period and doubles efficiency.

**Q2. Explain the three CSMA persistence methods.**
**A:** 1-Persistent: transmit immediately when idle (greedy, high collision risk). Non-Persistent: wait random time if busy (reduces collisions but wastes bandwidth). p-Persistent: transmit with probability p when idle, wait with probability (1−p), combining the benefits of both.

**Q3. How does CSMA/CD differ from CSMA/CA?**
**A:** CSMA/CD (used in wired Ethernet) detects collisions after they occur and aborts transmission immediately. CSMA/CA (used in WiFi) attempts to avoid collisions before they happen using IFS periods, random backoff contention windows, and optional RTS/CTS handshake.

**Q4. What is the vulnerable time in CSMA?**
**A:** The vulnerable time in CSMA is the propagation delay — the time it takes for a signal from one station to reach all others. If another station transmits during this window, a collision occurs.

**Q5. What are the steps in CSMA/CD?**
**A:** (1) If medium idle, transmit. (2) If busy, wait until idle then transmit. (3) If collision detected during transmission, stop and send jam signal. (4) Wait a random backoff time using binary exponential backoff. (5) Retry.

**Q6. What is the minimum frame size requirement for CSMA/CD and why?**
**A:** Frame transmission time Tfr must be at least 2 × Tp (maximum propagation time). This ensures the sender is still transmitting when the collision signal arrives back from the farthest point, allowing detection.

**Q7. Classify multiple access protocols.**
**A:** (1) Random Access: ALOHA, CSMA, CSMA/CD, CSMA/CA. (2) Controlled Access: Reservation, Polling, Token Passing. (3) Channelization: FDMA, TDMA, CDMA.

---

## Unit 8: Network Layer — Logical Addressing

### Summary
Covers the Internet Protocol (IP), IPv4 and IPv6 addressing formats, classful addressing (Classes A–E), subnet masks, subnetting, supernetting, Network Address Translation (NAT), and Address Resolution Protocol (ARP).

### Key Definitions and Concepts

- **IP** (Internet Protocol): Part of TCP/IP suite; assigns unique logical address to each device on a network.
- **IPv4**: 32-bit address; written as four decimal octets separated by dots (e.g., 192.168.1.1); supports ~4.3 billion addresses.
- **IPv6**: 128-bit hexadecimal address; eight groups of 16 bits separated by colons; supports ~3.4 × 10^38 addresses.
- **IPv4 vs IPv6 Comparison**:
  - IPv4: 32-bit, 4 octets, decimal, classes A–E, supports VLSM, checksum field present, broadcasting.
  - IPv6: 128-bit, 8 fields of 16 bits, hexadecimal, no classes, no VLSM, no checksum, multicasting, IPSec built-in, fragmentation by sender only.
- **IPv4 Transition to IPv6 Strategies**: Dual stacking, Tunneling, NAT.
- **Classful Addressing** (IPv4):

| Class | First Octet Range | Default Mask  | Netid Bytes | Hostid Bytes | Purpose            |
|-------|-------------------|---------------|-------------|--------------|-------------------|
| A     | 1–126             | 255.0.0.0     | 1           | 3            | Large networks    |
| B     | 128–191           | 255.255.0.0   | 2           | 2            | Medium networks   |
| C     | 192–223           | 255.255.255.0 | 3           | 1            | Small networks    |
| D     | 224–239           | —             | —           | —            | Multicasting      |
| E     | 240–254           | —             | —           | —            | Research/Reserved |

- **Subnet Mask**: 32-bit number with all 1s in the network portion and 0s in the host portion. ANDing an IP address with its mask gives the network address.
- **Subnetting**: Dividing a network into smaller subnetworks by borrowing bits from the host portion.
  - Number of subnets = 2^n (n = borrowed bits)
  - Hosts per subnet = 2^n − 2 (n = remaining host bits; subtract 2 for network and broadcast addresses)
- **Supernetting**: Combining multiple smaller networks into one larger network.
- **NAT** (Network Address Translation): Maps private IP addresses to a public IP; conserves public IP space.
- **ARP** (Address Resolution Protocol): Resolves IP addresses to MAC addresses on a LAN.
- **RARP** (Reverse ARP): Resolves MAC addresses to IP addresses.

### Key Formulas

- **Address Space**: IPv4 = 2^32 ≈ 4.3 billion; IPv6 = 2^128 ≈ 3.4 × 10^38
- **Subnetting**: Number of subnets = 2^n; Hosts per subnet = 2^n − 2
- **Network address**: Perform AND operation between IP address and subnet mask.
- **Class A**: starts with 0; Class B: starts with 10; Class C: starts with 110; Class D: 1110; Class E: 1111.

### Likely Exam Questions

**Q1. What is an IP address and what are its two parts?**
**A:** An IP address is a logical, numerical address assigned to each device on a network for unique identification. It consists of a network part (identifies the network) and a host part (identifies the specific device within that network).

**Q2. Compare IPv4 and IPv6.**
**A:** IPv4 is a 32-bit decimal address (4 octets, dot notation); IPv6 is a 128-bit hexadecimal address (8 groups of 16 bits, colon notation). IPv4 supports ~4.3 billion addresses; IPv6 supports ~3.4 × 10^38. IPv6 includes built-in IPSec, no checksum field, uses multicasting (not broadcasting), and fragmentation is done only by senders.

**Q3. Explain classful IP addressing. What are the five classes?**
**A:** Class A (1–126, mask 255.0.0.0): large organizations. Class B (128–191, mask 255.255.0.0): medium organizations. Class C (192–223, mask 255.255.255.0): small organizations. Class D (224–239): multicast. Class E (240–254): reserved/research.

**Q4. Given the address 132.6.17.85, find the network address.**
**A:** Address 132.x.x.x is Class B; default mask = 255.255.0.0. Network address = first two octets preserved, last two set to 0 = **132.6.0.0**.

**Q5. What is subnetting? Give the subnetting formula.**
**A:** Subnetting divides a single classful network into multiple smaller logical sub-networks by borrowing host bits. Formulae: Number of subnets = 2^n; Usable hosts per subnet = 2^n − 2 (where n = number of borrowed/remaining bits respectively).

**Q6. What is NAT and why is it needed?**
**A:** NAT (Network Address Translation) translates private IP addresses to a single public IP address (and back), allowing multiple devices with private addresses to share one public IP. This conserves the limited IPv4 public address space.

**Q7. What is ARP and how does it work?**
**A:** ARP (Address Resolution Protocol) resolves a known IP address to the corresponding MAC address on a LAN. The host broadcasts an ARP request ("Who has this IP?"); the device with that IP responds with its MAC address. The mapping is cached in the ARP table.

---

## Unit 9: Network Layer — Routing

### Summary
Covers routing concepts, classification of routing algorithms (adaptive vs non-adaptive), unicast routing protocols (Distance Vector, Link State, Path Vector), broadcast and multicast routing, Dijkstra's shortest path algorithm, and mobile ad-hoc network routing.

### Key Definitions and Concepts

- **Routing**: Process of selecting a path for data packets from source to destination.
- **Routing Table**: Contains information about routes; used by routers to forward packets.
- **Routing Algorithm Criteria**: Correctness, simplicity, robustness, stability, fairness, optimality.
- **Classification of Routing Algorithms**:
  - **Adaptive (Dynamic) Routing**: Routing decisions change based on network topology and traffic. Types: Centralized, Isolation, Distributed.
  - **Non-Adaptive (Static) Routing**: Routes pre-computed and downloaded to routers at boot. Types: Flooding, Random Walks.
- **Adaptive Routing Types**:
  - **Centralized**: One node has complete network info and makes all routing decisions.
  - **Isolation**: Each node makes decisions using only local information.
  - **Distributed**: Nodes exchange info with neighbors iteratively to compute routes.
- **Non-Adaptive Routing Types**:
  - **Flooding**: Every incoming packet sent on every outgoing line except the one it arrived on. Guaranteed delivery but creates duplicates; controlled by sequence numbers, hop count, or spanning tree.
  - **Random Walk**: Packet sent to a random neighbor; robust but slow convergence.
- **Unicast Routing Protocols**:
  - **Distance Vector Routing (Bellman-Ford)**: Each router maintains a table of distances to all destinations. Shares table with neighbors periodically. Uses Bellman-Ford equation: Dx(y) = min{C(x,v) + Dv(y)} for all neighbors v. Simpler but slower to converge; susceptible to count-to-infinity problem.
  - **Link State Routing (Dijkstra)**: Each router floods link-state packets (LSPs) to all others; builds complete network topology. Runs Dijkstra's algorithm to find shortest paths. Faster convergence; used in OSPF.
  - **Path Vector Routing**: Used in inter-domain routing (BGP); each route entry includes the full path.
- **Routing Types**: Unicast (one sender, one receiver), Broadcast (one sender, all receivers), Multicast (one sender, multiple specific receivers), Anycast (one sender, nearest receiver).

### Key Formulas / Algorithms

- **Bellman-Ford**: Dx(y) = min{C(x,v) + Dv(y)} for each neighbor v
  - Initialize: Distance to self = 0; all others = infinity.
  - Iterate until convergence.
- **Dijkstra's Shortest Path**:
  1. Start with root node; set its cost to 0, all others to infinity.
  2. Select the unvisited node with minimum cost; add to tree.
  3. Update costs of unvisited neighbors through the new node.
  4. Repeat until all nodes are in the tree.

### Likely Exam Questions

**Q1. What is the difference between adaptive and non-adaptive routing algorithms?**
**A:** Adaptive (dynamic) routing adjusts routes based on current network conditions (topology, load, delay). Non-adaptive (static) routing uses pre-calculated routes that don't change during operation. Adaptive is more flexible but complex; static is simple but rigid.

**Q2. Explain Distance Vector Routing. What is the count-to-infinity problem?**
**A:** Each router maintains a table of distances to all destinations and shares it with neighbors. Routers update tables using the Bellman-Ford equation. The count-to-infinity problem occurs when a link fails and routers keep incrementing the distance to the unreachable node in a loop, taking a long time to converge.

**Q3. How does Link State Routing work?**
**A:** Each router floods Link State Packets (containing its link costs) to all other routers. Every router builds a complete map of the network. Each router then runs Dijkstra's algorithm on this map to compute shortest paths to all destinations. It converges faster than distance vector.

**Q4. Compare Distance Vector and Link State routing.**
**A:** Distance Vector is simpler to configure and uses less memory; however, it converges slowly, suffers from count-to-infinity, and creates more routing traffic. Link State converges faster and avoids count-to-infinity but requires more CPU and memory (each router stores the entire topology).

**Q5. Describe Dijkstra's shortest path algorithm.**
**A:** (1) Set source cost = 0, all others = infinity. (2) Add source to tree. (3) Select nearest unvisited node; add to tree. (4) Update costs of its unvisited neighbors. (5) Repeat steps 3–4 until all nodes are added. Result is the shortest path tree from the source.

**Q6. What is flooding in routing? What are its advantages and disadvantages?**
**A:** Flooding sends each incoming packet on all outgoing links except the one it arrived from. Advantage: Simple, extremely robust, guaranteed delivery. Disadvantage: Creates excessive traffic and duplicate packets. Controlled using sequence numbers and hop count.

**Q7. Distinguish between unicast, broadcast, and multicast routing.**
**A:** Unicast: one sender to one specific receiver. Broadcast: one sender to all receivers in the network. Multicast: one sender to a specific group of receivers. Anycast sends to the nearest receiver in a group.

---

## Unit 10: Transport Layer Protocols

### Summary
Covers the transport layer's role and services (end-to-end delivery, reliable delivery, flow control, multiplexing, addressing), connection-oriented (TCP) vs connectionless (UDP) services, and TCP/UDP protocols.

### Key Definitions and Concepts

- **Transport Layer**: Layer 4 of OSI; provides logical communication between application processes on different hosts. Implemented in end systems, not routers.
- **Services Provided by Transport Layer**:
  1. **End-to-End Delivery**: Ensures entire message from source reaches destination.
  2. **Reliable Delivery**: Error control, sequence control, loss control, duplication control.
  3. **Flow Control**: Prevents sender from overwhelming receiver (uses Sliding Window).
  4. **Multiplexing**: Multiple processes share one transport connection.
     - **Upward Multiplexing**: Multiple transport connections share one network connection.
     - **Downward Multiplexing**: One transport connection uses multiple network connections.
  5. **Addressing**: Uses port numbers (TSAPs) to identify specific application processes.
- **Connection-Oriented Service (TCP)**:
  - Establishes connection first (3-way handshake), then transfers data, then terminates.
  - All packets follow the same path; ordered delivery.
  - Provides flow control, error control, congestion control.
  - More reliable but requires higher bandwidth.
  - Analogy: Telephone system.
- **Connectionless Service (UDP)**:
  - No connection establishment; each packet (datagram) is independent.
  - Packets may take different paths; may arrive out of order.
  - No flow control, error control, or congestion control.
  - Faster, lower overhead.
  - Analogy: Postal system.
- **TCP** (Transmission Control Protocol): Connection-oriented, reliable, byte-stream service.
- **UDP** (User Datagram Protocol): Connectionless, unreliable, datagram service. Faster, used for real-time applications.

| Feature | Connection-Oriented (TCP) | Connectionless (UDP) |
|---------|--------------------------|----------------------|
| Related to | Telephone system | Postal system |
| Preferred for | Long, steady communication | Bursty communication |
| Congestion | Not possible (dedicated path) | Possible |
| Reliability | Guaranteed | Not guaranteed |
| Packet routing | Same path | Different paths |
| Bandwidth | Higher requirement | Lower requirement |

### Key Formulas / Algorithms
- TCP 3-way handshake: SYN → SYN-ACK → ACK
- Port numbers: Well-known (0–1023), Registered (1024–49151), Dynamic (49152–65535)

### Likely Exam Questions

**Q1. What are the services provided by the transport layer?**
**A:** End-to-End delivery, Reliable delivery (error control, sequence control, loss control, duplication control), Flow control (sliding window), Multiplexing (upward and downward), and Addressing (port numbers/TSAPs).

**Q2. Distinguish between connection-oriented and connectionless services.**
**A:** Connection-oriented (TCP) establishes a connection before data transfer; all packets follow the same path; provides reliability and ordered delivery (like a telephone). Connectionless (UDP) sends each packet independently on potentially different paths; no guarantee of order or delivery (like postal service); faster and lower overhead.

**Q3. What is multiplexing in the transport layer? Explain upward and downward multiplexing.**
**A:** Multiplexing allows multiple processes to share transport resources. Upward multiplexing: multiple transport connections use the same network connection (cost-effective). Downward multiplexing: one transport connection splits across multiple network connections (improves throughput on low-capacity networks).

**Q4. How does the transport layer differ from the data link layer in terms of error control?**
**A:** The data link layer provides node-to-node error control (between adjacent nodes on a link). The transport layer provides end-to-end error control across the entire network from source to destination, detecting errors that may be introduced within routers.

**Q5. What is the role of port numbers at the transport layer?**
**A:** Port numbers (TSAPs — Transport Service Access Points) identify specific application processes running on a host. They allow multiplexing — multiple applications can communicate over the network simultaneously. Well-known ports: HTTP=80, FTP=21, SMTP=25, DNS=53.

**Q6. Why is flow control important at the transport layer?**
**A:** Flow control prevents a fast sender from overwhelming a slow receiver. The transport layer uses the sliding window protocol for this purpose. Without flow control, the receiver would discard excess packets, causing retransmissions and congestion.

**Q7. Why is UDP preferred over TCP for real-time applications?**
**A:** UDP has lower overhead (no connection establishment/termination, no ACKs, no retransmissions), which means lower latency. For real-time applications like video streaming or VoIP, a slightly lost packet is better tolerated than delays caused by retransmission.

---

## Unit 11: Congestion Control and Quality of Service

### Summary
Covers the concept of congestion, its causes and costs, congestion control techniques (open-loop and closed-loop), traffic profiles (CBR, VBR, bursty), Quality of Service (QoS) parameters, and Integrated Services (IntServ).

### Key Definitions and Concepts

- **Congestion**: Occurs when a network node or link carries more data than it can handle. Effects: queuing delay, packet loss, blocking of new connections.
- **Congestion occurs when**: Offered load > Network capacity.
- **Consequences**: Throughput drops as load increases beyond network capacity; retransmissions worsen the situation.
- **Traffic Descriptors**: Average data rate, peak data rate, maximum burst size.
- **Traffic Profiles**:
  - **CBR** (Constant Bit Rate): Fixed data rate; predictable; easy to handle.
  - **VBR** (Variable Bit Rate): Smoothly varying rate; different average and peak rates.
  - **Bursty**: Rate changes suddenly; large difference between average and peak.
- **Congestion Control Approaches**:
  - **Open-Loop (Prevention)**: Policies applied before congestion occurs.
    - Retransmission policy (optimize timer design)
    - Window policy (Selective Repeat preferred over Go-Back-N)
    - Acknowledgment policy (don't ACK every packet)
    - Discarding policy (discard less-sensitive packets)
    - Admission policy (deny new connections during congestion)
  - **Closed-Loop (Removal)**: Feedback mechanisms to remove existing congestion.
    - **Backpressure**: Congestion signal propagates upstream node by node.
    - **Choke Packet**: Congested node sends packet directly to source.
    - **Implicit Signaling**: Source infers congestion from symptoms (e.g., dropped packets, long delays).
    - **Explicit Signaling**: Congested node sets a bit in packet header; backward (toward source) or forward (toward destination) signaling.
- **Quality of Service (QoS)**: The ability to provide different levels of service to different traffic types. Measured by: Delay, Jitter, Throughput, Error Rate.
- **QoS Solutions**:
  - **Stateless**: Routers maintain no per-flow state; scalable but weak guarantees.
  - **Stateful**: Routers maintain per-flow state; stronger guarantees but less scalable.
- **Integrated Services (IntServ)**: Architecture for QoS guarantees in IP networks; relies on resource reservation (RSVP protocol); routers maintain state of allocated resources.

### Key Formulas

- **Goodput**: Useful throughput (in = out under ideal conditions).
- **Average Data Rate** = (Total bits) / (time period in seconds).
- **Effective Bandwidth**: Function of average data rate, peak data rate, and maximum burst size.

### Likely Exam Questions

**Q1. What is network congestion and what are its typical effects?**
**A:** Congestion occurs when the load on a network exceeds its capacity. Typical effects include: queuing delays at routers, packet loss (buffer overflow), blocking of new connections, and reduced throughput (may decrease even as offered load increases).

**Q2. Distinguish between open-loop and closed-loop congestion control.**
**A:** Open-loop control is proactive — it prevents congestion before it occurs (e.g., admission control, retransmission policy). Closed-loop control is reactive — it detects congestion and takes steps to remove it (e.g., backpressure, choke packets, explicit signaling).

**Q3. Explain backpressure and choke packet mechanisms.**
**A:** Backpressure is a node-to-node mechanism where a congested node signals its upstream neighbor to slow down; the signal propagates back toward the source. A choke packet is sent directly from the congested node to the source, bypassing intermediate nodes, to inform the source to reduce its transmission rate.

**Q4. What are the traffic profiles used in data networks?**
**A:** CBR (Constant Bit Rate): fixed rate, predictable. VBR (Variable Bit Rate): smoothly changing rate with different average and peak values. Bursty: rate changes suddenly, large difference between average and peak (e.g., web traffic).

**Q5. What is QoS and what are its four main parameters?**
**A:** QoS (Quality of Service) refers to the ability to provide guaranteed or differentiated service levels. The four parameters are: Delay (end-to-end latency), Jitter (variation in delay), Throughput (data rate), and Error Rate.

**Q6. What is Integrated Services (IntServ)?**
**A:** IntServ is an architecture for providing per-flow QoS guarantees in IP networks. Applications signal their resource requirements; routers reserve bandwidth and other resources along the path using RSVP. Routers maintain state for each flow.

**Q7. What is goodput and how does it differ from throughput?**
**A:** Goodput is the actual useful data delivered successfully (in = out under ideal conditions). Throughput includes all transmitted data including retransmissions. Retransmissions increase throughput-in but reduce goodput, wasting capacity.

---

## Unit 12: Application Layer — Services and Protocols

### Summary
Covers application-layer protocols: Telnet, FTP, DNS, SMTP, POP3, and IMAP. Explains how each protocol works, its port numbers, and its purpose.

### Key Definitions and Concepts

- **Application Layer**: Highest OSI layer; interacts directly with user applications; protocols include HTTP, FTP, SMTP, DNS, Telnet.
- **Telnet** (Terminal Network):
  - Application layer protocol; provides remote login capability.
  - Port 23; uses TCP; bidirectional text-oriented communication.
  - Uses **NVT** (Network Virtual Terminal) to translate between local and remote character sets.
  - Types of login: Local (to own machine), Remote (to distant machine via Telnet).
  - Option negotiations: DO, DON'T, WILL, WON'T.
  - Not secure (data in cleartext); SSH is its secure replacement.
- **FTP** (File Transfer Protocol):
  - Standard protocol for transferring files between hosts; uses TCP.
  - **Two connections**: Control connection (port 21, stays open during session) and Data connection (port 20, opens for each file transfer).
  - FTP Client components: User interface, Control process, Data transfer process.
  - Advantages: Fast, efficient, secure (login required), bidirectional.
  - Disadvantages: Passwords/data sent as cleartext (security risk), file size limit of 2 GB.
- **DNS** (Domain Name System):
  - Hierarchical, decentralized naming system; translates domain names to IP addresses.
  - Distributed worldwide directory service; essential since 1985.
  - Uses authoritative name servers for each domain.
  - Hierarchy: root → top-level domain (TLD) → second-level domain → sub-domain.
- **SMTP** (Simple Mail Transfer Protocol):
  - TCP/IP protocol for sending email; push protocol (sender pushes mail to receiver's server).
  - Port 25.
  - SMTP Commands: HELO, MAIL FROM, RCPT TO, DATA, QUIT.
- **POP3** (Post Office Protocol version 3):
  - Protocol for retrieving email from a mail server; pull protocol.
  - Port 110; downloads and typically deletes email from server.
- **IMAP** (Internet Message Access Protocol):
  - More advanced mail retrieval protocol; port 143.
  - Allows management of email on the server (folders, read/unread status); emails stay on server.
  - Better for accessing email from multiple devices.

### Key Formulas / Algorithms
- Port numbers: Telnet=23, FTP control=21, FTP data=20, SMTP=25, POP3=110, IMAP=143, DNS=53, HTTP=80, HTTPS=443.

### Likely Exam Questions

**Q1. What is Telnet and how does it work?**
**A:** Telnet is an application layer protocol (port 23, TCP) that enables remote login. It uses the NVT (Network Virtual Terminal) concept to translate characters between different systems. The user's Telnet client connects to the remote Telnet server; keystrokes are sent to the remote machine and responses are displayed locally.

**Q2. What is the role of DNS and how does it resolve a domain name?**
**A:** DNS (Domain Name System) translates human-readable domain names to IP addresses. When a user types a URL, the browser queries a DNS server. The DNS server looks up its records and returns the corresponding IP address. The browser then contacts the web server at that IP address.

**Q3. Explain the two types of connections used by FTP.**
**A:** FTP uses two TCP connections: (1) Control Connection (port 21): remains open for the entire FTP session to exchange commands. (2) Data Connection (port 20): opened for each file transfer and closed when the transfer completes. This separation allows command and data traffic to be handled independently.

**Q4. Compare SMTP, POP3, and IMAP.**
**A:** SMTP (port 25) pushes email from sender to recipient's mail server. POP3 (port 110) downloads email from server to client, typically deleting from server. IMAP (port 143) allows managing email on the server; emails remain on server and can be accessed from multiple devices.

**Q5. What is NVT in the context of Telnet?**
**A:** NVT (Network Virtual Terminal) is a standard interface defined by Telnet that solves the problem of heterogeneous systems. The client Telnet translates local characters to NVT format; the server Telnet translates NVT format to the remote system's format, enabling communication between different types of computers.

**Q6. What are the advantages and disadvantages of FTP?**
**A:** Advantages: Fast file transfer, efficient (partial downloads possible), secure (login required), bidirectional. Disadvantages: Passwords and data sent in cleartext (security risk), 2 GB file size limit, does not support simultaneous transfers to multiple receivers.

**Q7. How does the DNS hierarchy work?**
**A:** DNS is hierarchical — at the top are root name servers, below them are TLD (Top-Level Domain) servers (.com, .edu, .in), then authoritative name servers for specific domains. A DNS query traverses this hierarchy: local cache → root server → TLD server → authoritative server → IP address returned.

---

## Unit 13: Internet and World Wide Web

### Summary
Covers the Internet (history, working, ICANN governance), URI/URL structure, HTTP/HTTPS (versions, characteristics, working), World Wide Web (WWW), and VPN (Virtual Private Networks).

### Key Definitions and Concepts

- **Internet**: A global network connecting billions of computers using TCP/IP; founded by DARPA (ARPANET, 1969); connects via physical cables (optical fiber, copper) and wireless technologies.
- **How Internet Works**: Browser → DNS (domain name to IP) → Server (sends data as packets) → optical fiber → router → Ethernet/WiFi → device.
- **ICANN** (Internet Corporation for Assigned Names and Numbers): Manages IP address assignment and domain name registration.
- **Internet Governance**: Internet Society (ISOC) → Internet Architecture Board (IAB) → Internet Engineering Task Force (IETF).
- **URI** (Uniform Resource Identifier): Name, locator, or both for an online resource.
- **URL** (Uniform Resource Locator): Subset of URI; human-readable address. Format: `protocol://WebSiteName.topLevelDomain/path`. Example: `https://www.google.com/search`.
- **HTTP** (HyperText Transfer Protocol):
  - Invented by Tim Berners-Lee. Stateless, connectionless protocol.
  - Versions: 0.9 (1991), 1.0 (1996), 1.1 (1997), 2.0 (2015), 3.0 (based on QUIC).
  - Characteristics: IP-based, request-response model, stateless, connectionless.
  - Advantages: Low CPU/memory usage, less congestion, reduced latency after initial handshake.
  - Disadvantages: Less secure (no encryption); requires high power; HTTP uses plaintext.
- **HTTPS** (HTTP Secure): HTTP with TLS encryption; provides security over HTTP.
- **WWW** (World Wide Web): Information system using hypertext; accessed via web browsers using HTTP; invented by Tim Berners-Lee at CERN.
- **Internet vs Web**: Internet is the global network infrastructure (hardware/cables); Web is an application that runs on the Internet using HTTP.
- **VPN** (Virtual Private Network): Creates a secure, encrypted tunnel over a public network (Internet) to connect remote users/offices as if on a private network.

### Key Formulas / Algorithms
- URL structure: `protocol://hostname.tld/path`
- HTTP request-response cycle: Client request → DNS resolution → Server response → Connection close (stateless).

### Likely Exam Questions

**Q1. How does the Internet work? Describe the process of accessing a website.**
**A:** User types URL → browser sends query to DNS server → DNS returns IP address → browser sends HTTP request to web server → server sends data as packets through optical fiber and routers → data arrives at client as electrical signals (Ethernet) or electromagnetic waves (WiFi) → browser displays the page.

**Q2. What is the difference between the Internet and the World Wide Web?**
**A:** The Internet is the global infrastructure (physical cables, routers, servers) that connects billions of devices. The WWW is an information system (application) that runs on top of the Internet, using HTTP to deliver hypertext content accessed via web browsers.

**Q3. What is a URL? Explain its structure.**
**A:** A URL (Uniform Resource Locator) is a human-readable address that identifies a resource on the Internet. Structure: `protocol://WebSiteName.topLevelDomain/path`. Example: `https://www.example.com/login.html` — HTTPS is the protocol, example is the website name, .com is the TLD, and /login.html is the path.

**Q4. What are the characteristics of HTTP?**
**A:** HTTP is IP-based, uses a request-response model between client and server, is stateless (each request is independent, server remembers nothing about client after response), and connectionless (connection closes after each response). Any content type can be transferred if both sides support it.

**Q5. Who governs the Internet? Name the key organizations.**
**A:** The Internet has no single authority. Key governing bodies: ICANN (manages IP addresses and domain names), Internet Society (ISOC) (promotes global information exchange), Internet Architecture Board (IAB) (reviews standards), Internet Engineering Task Force (IETF) (addresses operational/technical problems).

**Q6. What is a VPN and what are its benefits?**
**A:** A VPN (Virtual Private Network) creates an encrypted, secure tunnel over a public network (Internet), allowing remote users or offices to communicate as if on a private network. Benefits: data security/encryption, privacy, secure remote access, bypassing geographic restrictions.

**Q7. Compare HTTP and HTTPS.**
**A:** HTTP transmits data in plaintext, making it vulnerable to eavesdropping. HTTPS adds TLS (Transport Layer Security) encryption to HTTP, ensuring data is encrypted in transit, authenticating the server, and protecting data integrity. HTTPS uses port 443 vs HTTP's port 80.

---

## Unit 14: Network Security

### Summary
Covers network security fundamentals, cybersecurity goals (CIA triad), types of cyber-attacks (web-based and system-based), cryptography (symmetric, asymmetric, hash functions), message integrity (MDC, MAC), email security (PEM, PGP, S/MIME), and firewalls.

### Key Definitions and Concepts

- **Network Security**: Protecting network infrastructure, data, and users from unauthorized access, misuse, or attacks.
- **Cybersecurity**: Protection of Internet-connected systems (hardware, software, data) from cyber-attacks.
- **CIA Triad** — Three cybersecurity goals:
  1. **Confidentiality**: Protect data from unauthorized disclosure. Tools: Encryption, Access Control, Authentication, Authorization, Physical Security.
  2. **Integrity**: Ensure data is accurate and unaltered. Tools: Backups, Checksums, Data Correcting Codes.
  3. **Availability**: Ensure authorized users can access data when needed. Tools: Physical protections, Computational redundancies.
- **Types of Cyber Attacks**:
  - **Web-based**: Injection attacks, DNS Spoofing, Session Hijacking, Phishing, Brute Force, DoS (Denial of Service — volume-based, protocol, application layer), Dictionary attacks, URL Interpretation, File Inclusion, Man-in-the-Middle.
  - **System-based**: Virus, Worm, Trojan Horse, Backdoors, Bots.
- **Cryptography**: Study and practice of secure communication using encryption.
  - **Core Principles**: Confidentiality, Integrity, Authentication, Non-repudiation.
  - **Encryption Process**: Plaintext → (Encryption with key K) → Ciphertext. At receiver: Ciphertext → (Decryption with key K) → Plaintext.
  - **Types of Cryptography**:
    1. **Secret Key (Symmetric)**: Same key for encryption and decryption. Fast but key distribution is a problem.
    2. **Public Key (Asymmetric)**: Key pair — public key (shared) and private key (secret). Alice encrypts with Bob's public key; Bob decrypts with his private key. Solves key distribution.
    3. **Hash Functions**: No key; creates a fixed-length hash (digest) from message. One-way function. Used for integrity checking. Examples: MD5, SHA-1.
  - **Caesar Cipher**: Example of symmetric encryption; each character shifted by a fixed number (key). ABCDE → DEFGH (shift 3).
- **Message Integrity**:
  - **MDC** (Modification Detection Code): Hash of message; proves message hasn't changed.
  - **MAC** (Message Authentication Code): Hash of (message + shared secret); proves both integrity and authenticity.
  - **Cryptographic Hash Function Criteria**: Preimage Resistance (one-way), Second Preimage Resistance, Collision Resistance (infeasible to find two inputs with same hash).
- **Email Security**:
  - **PEM** (Privacy Enhanced Mail): Canonical conversion → Digital Signature → Encryption → Base64 encoding.
  - **PGP** (Pretty Good Privacy): Provides authentication, confidentiality, compression, email compatibility (radix-64). Uses SHA-1/MD5 hash, RSA/DSS signatures.
  - **S/MIME**: Cryptographic algorithms — DSS/RSA (signatures), SHA-1/MD5 (hash), AES/Triple-DES (encryption), HMAC/SHA-1 (MAC).
- **Firewalls**:
  - A hardware/software device that monitors and filters network traffic based on security rules.
  - Acts as a barrier between private internal network and the public Internet.
  - Two main functions: Packet filtering and Application proxy gateways.
  - Two security policies: Deny-everything-not-allowed (restrictive) and Allow-everything-not-denied (permissive).
  - Limitations: Cannot stop insider attacks, virus-infected files, password misuse, social engineering.

### Key Formulas / Algorithms

- **Encryption**: C = E(m, k); Decryption: m = D(C, k)
- **Hash**: H(m) = fixed-length digest regardless of input length.
- **MAC**: H(m + s) where s = shared secret key.
- **Symmetric encryption** (same key): K_enc = K_dec.
- **Asymmetric encryption**: Encrypt with recipient's public key; decrypt with recipient's private key.
- **Caesar Cipher**: Ciphertext character = Plaintext character + shift_key (mod 26).

### Likely Exam Questions

**Q1. What is the CIA triad in cybersecurity? Explain each component.**
**A:** The CIA triad is the foundation of information security: **Confidentiality** (protecting data from unauthorized access — tools: encryption, access control, authentication); **Integrity** (ensuring data is accurate and unaltered — tools: checksums, backups, error-correcting codes); **Availability** (ensuring authorized users can access data when needed — tools: redundancy, physical protection).

**Q2. What is the difference between symmetric and asymmetric cryptography?**
**A:** Symmetric (secret key) cryptography uses the same key for encryption and decryption; fast but the key must be securely shared between parties. Asymmetric (public key) uses a key pair — data encrypted with the recipient's public key can only be decrypted with their private key; solves the key distribution problem but is slower.

**Q3. What are hash functions? What properties must a cryptographic hash function have?**
**A:** A hash function takes an input of any length and produces a fixed-length output (digest). It is a one-way function. Cryptographic hash functions must satisfy: Preimage Resistance (given hash, cannot find input), Second Preimage Resistance (given input and hash, cannot find another input with same hash), and Collision Resistance (computationally infeasible to find any two inputs with same hash).

**Q4. Distinguish between MDC and MAC.**
**A:** MDC (Modification Detection Code) is a hash of the message; it proves the message has not been changed but does not authenticate the sender (anyone can compute it). MAC (Message Authentication Code) is a hash of the message concatenated with a shared secret key; it proves both message integrity AND authenticity.

**Q5. What is a firewall? What are its two main security functions?**
**A:** A firewall is a hardware/software system that monitors and filters network traffic based on predefined rules, acting as a barrier between a private network and the public Internet. Main functions: (1) Packet filtering (accept/deny based on IP/port rules) and (2) Application proxy gateways (proxy services for inside users, shielding internal hosts).

**Q6. Classify the types of cyber-attacks.**
**A:** **Web-based attacks**: Injection, DNS Spoofing, Session Hijacking, Phishing, Brute Force, DoS/DDoS, Dictionary attacks, Man-in-the-Middle. **System-based attacks**: Virus (self-replicating malware), Worm (spreads via network without user action), Trojan Horse (masquerades as legitimate software), Backdoors, Bots.

**Q7. What are the steps in Privacy Enhanced Mail (PEM) and what is PGP?**
**A:** PEM steps: (1) Canonical Conversion (standard format). (2) Digital Signature (message digest encrypted with sender's private key). (3) Encryption (message + signature encrypted with symmetric key). (4) Base64 Encoding (binary to ASCII for email compatibility). **PGP** (Pretty Good Privacy) provides confidentiality and authentication for email using SHA-1/MD5 hashing, RSA signatures, and ZIP compression; it uses radix-64 encoding for email compatibility and is free and widely trusted.

---

*End of Computer Networks Exam Prep Guide*

*Source: Lovely Professional University — Computer Networks course material, Units 1–14.*
