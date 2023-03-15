# Research records 06

## Lecture slides

The slides for this lecture can be found here: https://bit.ly/ut-iot-2023-06


## Advantanges of Node-Red

It is easy to create and implement a UI that is also mobile friendly. 
Node Red is used in a industrial content. IBM.

## Scaling and Testing

– What will be issues scaling up (system size, number of systems, management)?

One of the big issues I see in scaling up is deploying the system, making sure the infrastructure supports the scaling and of course managing the system on it is up and running. How do we debug hundreds of devices and how we can update them when ever needed? How do you make sure that all nodes are running properly. 

How to secure your devices against vandalism and natural teardown. 


– How can we do testing?

ChatGPT says: 

    Testing IoT scaled up systems and frameworks that support many nodes can be a challenging task, but here are some strategies you can consider:

    Emulation and Simulation: One way to test IoT systems and frameworks at scale is through emulation and simulation. This approach involves creating a virtual environment that mimics the behavior of the actual system. By doing so, you can test the system at scale without the need for a physical deployment.

    Load Testing: Load testing involves simulating high traffic or workload to a system and analyzing how it performs under pressure. For IoT systems that support many nodes, it's essential to test the system's capacity to handle a high volume of data and connections.

    Field Testing: Field testing involves deploying the system in the actual environment where it will be used. This approach is ideal for testing IoT systems that have many nodes distributed across different locations. Field testing can help you identify issues that may not be visible in a controlled environment.

    Security Testing: IoT systems are vulnerable to cyber-attacks, and security testing is critical to ensure the system's security. This testing includes penetration testing, vulnerability scanning, and risk assessment.

    Integration Testing: Integration testing involves testing how different components of the system work together. For IoT systems that support many nodes, integration testing can help you identify issues related to communication, data synchronization, and interoperability.

Overall, testing IoT systems and frameworks that support many nodes requires a comprehensive testing strategy that covers different types of testing, including emulation, load testing, field testing, security testing, integration testing, and scalability testing

– What would you like to see for scaling up? (What is not so great currently?)

I think that deploying the Node at the moment is very time consuming and also frustration as it is very handcrafted. We can only upload one node at a time and it needs.
Over the air updates and deploying. 
A Framework with easy integration.

– What role will play simulator(-component)s, MQTT, and stories?

Stories are important to help us imagine what the project's need.
Story needs to contain key components of the system.
Simulator is the sales tool as well.
MQTT just confusion word, to make system to seem complicated and expensive, to get high price tag.


## Meet IoTempower video

Mark features that IoTempower seems to offer from your list:

- Architecture and hierarchical management.
- Over the air flashing. Capability to flash all the devices in the subfolder.
- Integration support with Node-Red and IoTKnit
- Framework handles all the system demands, protocols, etc.
- Feedback from the node devices with 5s blinking is a very nice feature as it offers a visual interface that proves the node is up and running.