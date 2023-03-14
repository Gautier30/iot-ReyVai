## How can we develop and manage software faster for IoT?

We can use IoT integration frameworks and different development methologies, automation tools and scalable archidectures.

---
## What are the key challenges of IoT and why?

- ever-growing number of devices
- interoperability between IoT platforms
- high integration costs
- connectivity issues with latency and reliability
- cost effectiveness
- lack of unified standard

These challenges arise due to the sheer complexity and diversity of IoT systems.

---
## What is/are the generic solution(s) for it?

- establishing IoT standards
- HIP hybrid integration platform
- using fog computation to keep data at the edge, adding computation to gateways and devices
- dataflow pipeline for efficient data processing and analysis

Two examples for used patterns.
-
- publish/subscribe pattern
- enterprise integration patterns

---
## What are the different categories of the presented frameworks?

- Dataflow pipeline
- Stream processing
- Process engine

---
## What are the main features of each category?

Dataflow pipeline:

- A sequence of stages through which data flows
- Allows for easy parallelization of tasks
- Often includes features for data cleansing, validation, and transformation

Stream processing:

- Real-time processing of data in motion
- Analysis and decision-making as data arrives
- Correlation and pattern detection
- Machine learning on streaming data

Process Engine:

- Automation of business process
- Allows for logic to be executed at the edge aka IoT devices
- Can wire together hardware and software systems

---
## Three or more examples of applications.

Dataflow pipeline:
- ETL (Extract, Transform, Load) processes
- Data migration and synchronization
- High throughput

Stream processing
- Real-time fraud detection in financial transactions
- Predictive maintenance in industrial settings
- Predictive analytics

Process Engine:
- Integrate and orchestrate various data sources
- Error handling, Re-Trying, Re-Routing, Wait, Resume
- More than ETL
- Automated workflow management in healthcare

---
## Three or more examples of available tools.

Dataflow pipeline:

- Apache NiFi
- StreamSets 
- Cask Hydrator
- Pentaho 
- Informatica 
- Talend

Stream processing

- Apache Kafka
- Apache Flink
- AWS Kinesis

Process Engine:
- Eclipse Kura
- Node-RED
- Flogo

