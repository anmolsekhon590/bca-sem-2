# Database Management Systems — Exam Questions

| Unit | Topic |
|------|-------|
| 01 | [Introduction to Fundamentals of DBMS](#unit-01-introduction-to-fundamentals-of-dbms) |
| 02 | [Database Design and ER Model](#unit-02-database-design-and-er-model) |
| 03 | [Relational Database](#unit-03-relational-database) |
| 04 | [SQL (DDL)](#unit-04-sql-ddl) |
| 05 | [SQL (DML)](#unit-05-sql-dml) |
| 06 | [Relational Languages](#unit-06-relational-languages) |
| 07 | [Relational Database Design](#unit-07-relational-database-design) |
| 08 | [Transaction Management](#unit-08-transaction-management) |
| 09 | [Concurrency Control](#unit-09-concurrency-control) |
| 10 | [SQL DCL/TCL](#unit-10-sql-dcltcl) |
| 11 | [Recovery Systems](#unit-11-recovery-systems) |
| 12 | [Distributed Databases](#unit-12-distributed-databases) |
| 13 | [Cloud Databases](#unit-13-cloud-databases) |
| 14 | [PL/SQL](#unit-14-plsql) |

---

## Unit 01: Introduction to Fundamentals of DBMS

**Q1. Define DBMS. List its advantages over a traditional file-based system.**

A DBMS is software that stores, retrieves, and manages interrelated data in a structured way. Advantages over file systems: eliminates data redundancy, enforces data integrity, supports concurrent multi-user access, provides data security and access control, ensures data independence, and offers backup/recovery mechanisms.

**Q2. Explain the three-level ANSI/SPARC architecture with the two types of data independence.**

The three levels are: (1) External — user views; (2) Conceptual — logical schema (all tables and relationships); (3) Internal — physical storage. Physical data independence means changing storage does not affect the conceptual schema. Logical data independence means changing the conceptual schema does not affect external views.

**Q3. What is metadata? Where is it stored?**

Metadata is "data about data" — it describes the structure (table names, column types, constraints, relationships) of the database rather than the actual data values. It is stored in the system catalog (data dictionary), which the DBMS maintains automatically.

**Q4. Distinguish between data and information.**

Data are raw, unprocessed facts (e.g., the number 500). Information is data that has been processed, organized, and given context to be meaningful (e.g., "Employee salary is Rs. 500"). Data becomes information when it is relevant and interpretable.

**Q5. What is physical data independence and why is it important?**

Physical data independence is the ability to modify the internal (physical) storage schema — such as changing file organization or adding indexes — without requiring any changes to the conceptual or external schemas. It is important because it allows database administrators to optimize storage and performance without affecting application programs or user views.

**Q6. List and describe four types of DBMS users.**

(1) Naive users — casual, front-end users who interact through pre-built forms/apps; (2) Application programmers — write programs using DML/DDL; (3) Sophisticated users — analysts who write complex queries directly; (4) DBA — manages the whole database system including security, schema design, and performance.

**Q7. What is a data dictionary?**

A data dictionary (system catalog) is a repository managed by the DBMS that stores metadata: table names, column definitions, data types, indexes, user access rights, and integrity constraints. The DBMS consults it to process queries and enforce rules.

---

## Unit 02: Database Design and ER Model

**Q1. What is a weak entity? How is it represented in an ER diagram?**

A weak entity cannot be uniquely identified by its own attributes alone; it depends on a strong (owner) entity. For example, a bank account's transactions are weak entities — they cannot exist without the account. In an ER diagram, a weak entity is represented by a double rectangle, and its identifying relationship by a double diamond.

**Q2. Distinguish between specialization and generalization with examples.**

Specialization is a top-down process — starting from a general entity (superclass) and breaking it into specialized subentities (subclasses) with specific attributes (e.g., Vehicle → Car, Truck, Motorcycle). Generalization is bottom-up — combining multiple entities that share common attributes into a single superclass (e.g., Car + Truck + Motorcycle → Vehicle).

**Q3. List and explain the four types of attributes in an ER model.**

(1) Key attribute — uniquely identifies an entity (e.g., Employee ID); (2) Composite attribute — made of sub-attributes (e.g., Name = First + Last); (3) Multivalued attribute — can hold multiple values (e.g., Phone numbers); (4) Derived attribute — computed from another attribute (e.g., Age from Date of Birth).

**Q4. What is aggregation in the EER model? Give an example.**

Aggregation represents a relationship-set as a higher-level entity so it can participate in another relationship. For example, the relationship "Works On" between Employee and Project can itself be an entity, allowing a Manager to manage the entire "Works On" association rather than just one of its participants.

**Q5. Explain key constraint and participation constraint with an example.**

Key constraint limits how many entities on one side of a relationship can be related. For example, each Department can have at most one Manager (1:1 key constraint on the Manages relationship). Participation constraint specifies whether all or some entities must participate: total participation means every entity must participate (e.g., every Department must be managed by someone), partial participation means some may not (e.g., not every Employee needs to be a manager).

**Q6. What are the steps in the database design process?**

(1) Requirements Analysis — understand what data and operations are needed; (2) Conceptual Design — create an ER diagram; (3) Logical Design — convert ER to relational schema; (4) Schema Refinement — normalize to remove anomalies; (5) Physical Design — choose indexes, file organization; (6) Security Design — define access roles and privileges.

**Q7. Define cardinality ratio and give examples of each type.**

Cardinality ratio describes how many entity instances can participate in a relationship. One-to-one (1:1): one person has one passport. One-to-many (1:N): one customer places many orders. Many-to-one (N:1): many students attend one college. Many-to-many (M:N): students take many courses and courses have many students.

---

## Unit 03: Relational Database

**Q1. Who proposed the relational model? What are the key concepts of the relational model?**

E.F. Codd proposed the relational model in 1970. Key concepts: data stored in relations (tables); each row is a tuple; each column is an attribute; every attribute has a domain; a primary key uniquely identifies tuples; foreign keys enforce referential integrity; physical storage is independent of the logical model.

**Q2. Distinguish between degree and cardinality of a relation.**

Degree is the number of attributes (columns) in a relation — a structural property. Cardinality is the number of tuples (rows) — a state property that changes as data is inserted or deleted. For a relation STUDENT(ID, Name, Age, GPA), degree = 4. If it has 100 students, cardinality = 100.

**Q3. Explain the Select and Project operations of relational algebra with examples.**

Select (σ) filters rows based on a condition — `σ_salary>20000(Employee)` returns all employees earning more than 20000. Project (∏) selects specific columns — `∏_name,salary(Employee)` returns only the name and salary columns (duplicate rows removed). Select is a horizontal cut; Project is a vertical cut.

**Q4. What is a View in a database? What are its types?**

A view is a virtual table created from a SELECT query and stored with a name. It does not physically store data but provides a logical window into the underlying tables. Types: (1) Read-Only View — only SELECT operations allowed; (2) Updateable View — allows INSERT, UPDATE, and DELETE, but only if defined from a single table, includes the primary key, and includes all NOT NULL columns.

**Q5. What is the difference between union and set intersection operations?**

Union (R ∪ S) returns all tuples that appear in R or in S or in both, eliminating duplicates. Both relations must be union-compatible. Set intersection (R ∩ S) returns only those tuples that appear in both R and S. Difference (R − S) returns tuples in R that are not in S.

**Q6. What is a foreign key and how does it enforce referential integrity?**

A foreign key is an attribute in one table that references the primary key of another table. It enforces referential integrity by ensuring that a foreign key value either matches an existing primary key value in the referenced table or is NULL. For example, an ORDER table's CustomerID is a foreign key referencing CUSTOMER's CustomerID, preventing orders from existing for non-existent customers.

**Q7. Distinguish between unary and binary relational algebra operations.**

Unary operations take a single relation as input: Select (σ), Project (∏), and Rename (ρ). Binary operations take two relations as input: Union (∪), Intersection (∩), Set Difference (−), Cartesian Product (×), and Join.

---

## Unit 04: SQL (DDL)

**Q1. Differentiate between DROP TABLE and TRUNCATE TABLE.**

`DROP TABLE` deletes the table itself along with all its data, constraints, and indexes — the table no longer exists afterward. `TRUNCATE TABLE` deletes all rows from the table but keeps the table structure (schema) intact, ready for new data. TRUNCATE is faster and auto-committed in most DBMS; it cannot be rolled back.

**Q2. What are SQL constraints? Explain PRIMARY KEY and FOREIGN KEY.**

Constraints are rules applied to columns to maintain data integrity. PRIMARY KEY uniquely identifies each row in a table — values must be unique and not null; only one primary key per table. FOREIGN KEY is an attribute that references the primary key of another table, ensuring referential integrity.

**Q3. Explain the four types of SQL JOINs with examples.**

INNER JOIN returns only rows with matching values in both tables. LEFT JOIN returns all rows from the left table and matching rows from the right (NULL for unmatched). RIGHT JOIN returns all rows from the right table and matching rows from the left (NULL for unmatched). FULL JOIN returns all rows from both tables, with NULL wherever there is no match.

**Q4. What is the difference between DELETE and TRUNCATE?**

`DELETE` is a DML command that removes rows conditionally (using WHERE clause); it can be rolled back and fires triggers. `TRUNCATE` is a DDL command that removes all rows instantly; it is auto-committed in most DBMS, cannot be rolled back, and does not fire row-level triggers.

**Q5. What is TCL? List its commands and explain ROLLBACK.**

TCL (Transaction Control Language) controls the permanence of database changes. Commands: `COMMIT` — permanently saves changes; `ROLLBACK` — undoes all changes since the last COMMIT or SAVEPOINT; `SAVEPOINT name` — marks a point in a transaction to which a partial rollback can be performed later.

**Q6. Explain the NOT NULL and CHECK constraints with examples.**

`NOT NULL` ensures a column always has a value — e.g., `NAME VARCHAR(50) NOT NULL`. `CHECK` ensures values satisfy a condition — e.g., `AGE INT CHECK (AGE >= 18)` rejects any age below 18. Both maintain data integrity at the column level.

**Q7. Write SQL to create a table STUDENT with roll number (PK), name (not null), age (default 18), and address (unique).**

```sql
CREATE TABLE STUDENT (
  ROLL_NO   INT PRIMARY KEY,
  NAME      VARCHAR(50) NOT NULL,
  AGE       INT DEFAULT 18,
  ADDRESS   VARCHAR(100) UNIQUE
);
```

---

## Unit 05: SQL (DML)

**Q1. What is a subquery? What are the rules for writing subqueries?**

A subquery (nested or inner query) is a SELECT statement embedded within another SQL statement, usually in the WHERE or HAVING clause. Rules: must be enclosed in parentheses; a single-row subquery used with `=` must return exactly one row; multi-row subqueries must use `IN`, `ANY`, or `ALL`; ORDER BY cannot appear in a subquery.

**Q2. Explain the LIKE operator with examples of % and _ wildcards.**

LIKE performs pattern matching on string values. `%` matches any zero or more characters. `_` matches exactly one character. Examples: `LIKE 'A%'` matches any name starting with A; `LIKE '_r%'` matches strings where the second character is r.

**Q3. How is a subquery used with the UPDATE statement?**

```sql
UPDATE table
SET column = new_value
WHERE column IN (SELECT column FROM other_table WHERE condition);
```
This updates rows whose column value matches results returned by the inner SELECT.

**Q4. What is a View? How do you create and drop it?**

A view is a named virtual table stored as a SELECT query. Create: `CREATE VIEW v_name AS SELECT ... FROM ... WHERE ...;`. Drop: `DROP VIEW v_name;`. Using `OR REPLACE` recreates the view if it already exists. Adding `WITH READ ONLY` prevents DML on the view.

**Q5. Distinguish between a correlated and non-correlated subquery.**

A non-correlated subquery is independent — it executes once and returns a result used by the outer query. A correlated subquery references columns from the outer query and is re-evaluated for each row of the outer query.

**Q6. What is the syntax for a SELECT statement? Explain each clause.**

`SELECT column_list FROM table WHERE condition ORDER BY col;` — SELECT specifies columns; FROM names tables; WHERE filters rows; ORDER BY sorts results. Additional clauses: GROUP BY groups rows, HAVING filters groups.

**Q7. Write a query to find all employees whose name starts with 'H' and has 'r' as the third character.**

`SELECT * FROM Employee WHERE name LIKE 'H_r%';`

---

## Unit 06: Relational Languages

**Q1. What is Tuple Relational Calculus? How does it differ from relational algebra?**

TRC is a non-procedural (declarative) query language where queries describe the desired result using predicates: `{t | P(t)}`. Relational algebra is procedural — it specifies the sequence of operations to retrieve data. Both have equivalent expressive power.

**Q2. What is QBE? How does it differ from SQL?**

QBE (Query-by-Example) is a graphical query language where users fill in example tables rather than writing queries. It is based on DRC, uses domain variables (prefixed with _), does not produce syntax errors, and is more intuitive for non-specialists.

**Q3. Explain the COUNT aggregate function and its three variants.**

`COUNT(*)` counts all rows including those with NULL values; `COUNT(column_name)` counts rows where the column is not NULL; `COUNT(DISTINCT column_name)` counts the number of distinct non-NULL values in the column.

**Q4. What is the difference between TRC and DRC?**

In TRC, variables range over entire tuples — each variable represents a complete row. In DRC, variables range over individual field (domain) values. TRC influenced SQL more; DRC influenced QBE more. Both have the same expressive power as relational algebra.

**Q5. Write a TRC query to find names of customers who have both a loan and an account.**

```
{t | ∃ s ∈ borrower (t[customer_name] = s[customer_name])
     ∧ ∃ u ∈ depositor (t[customer_name] = u[customer_name])}
```

**Q6. How is AVG calculated? Write the formula.**

`AVG(salary) = SUM(salary) / COUNT(salary)` — averages only non-NULL values.

**Q7. What are the advantages of QBE over SQL for non-specialists?**

QBE displays table templates automatically so users do not need to memorize attribute names. Queries are formed by filling example values — more intuitive. No syntax errors are possible. Supported by tools like Microsoft Access.

---

## Unit 07: Relational Database Design

**Q1. What is a functional dependency? Explain with an example.**

A functional dependency `A → B` means that for each value of attribute A, there is exactly one value of attribute B. Example: in a STUDENT table, `Roll_No → Student_Name` because each roll number maps to exactly one name.

**Q2. What is normalization? Why is it needed?**

Normalization is the systematic process of organizing relations to minimize data redundancy and eliminate update, insertion, and deletion anomalies. It is needed because unnormalized tables can have redundant data that leads to inconsistencies when data is modified.

**Q3. Explain 1NF, 2NF, and 3NF with conditions for each.**

1NF: all attribute values must be atomic; no repeating groups. 2NF: must be in 1NF; all non-key attributes must be fully functionally dependent on the entire primary key (no partial dependencies). 3NF: must be in 2NF; no transitive dependencies (a non-key attribute should not depend on another non-key attribute).

**Q4. What is BCNF? How does it differ from 3NF?**

BCNF (Boyce-Codd Normal Form) is a stricter version of 3NF. In 3NF, for every FD `X → Y`, either X is a superkey OR Y is a prime attribute. In BCNF, for every FD `X → Y`, X must always be a superkey. BCNF eliminates anomalies that some 3NF relations still have.

**Q5. Explain the three types of anomalies in a database with examples.**

Update anomaly: a fact stored redundantly — updating one row but missing others causes inconsistency. Insertion anomaly: cannot insert certain data without providing unrelated data (e.g., cannot record a new course unless at least one student is enrolled). Deletion anomaly: deleting a row inadvertently loses other important data.

**Q6. What is a transitive dependency? Give an example and explain how 3NF resolves it.**

A transitive dependency exists when a non-key attribute depends on another non-key attribute: `A → B → C`. Example: `EMP_ID → ZIP_CODE → CITY`. 3NF removes this by creating a separate table `ZIP_TABLE(ZIP_CODE, CITY)`.

**Q7. Explain 4NF with an example of a multivalued dependency.**

A multivalued dependency `A →→ B` means for each value of A, there are multiple values of B, independent of other attributes. Example: STUDENT(ID, Course, Hobby) — creating redundancy. 4NF requires decomposing this into STUDENT_COURSE(ID, Course) and STUDENT_HOBBY(ID, Hobby).

---

## Unit 08: Transaction Management

**Q1. Define a transaction. Explain the ACID properties.**

A transaction is a logical unit of work comprising a sequence of database operations. ACID: Atomicity — all operations succeed or none are applied; Consistency — transaction takes the DB from one valid state to another; Isolation — concurrent transactions appear to execute independently; Durability — committed changes survive system failure.

**Q2. Explain the transaction states with a state diagram description.**

A transaction begins in Active state. When the last statement executes, it moves to Partially Committed. If validation passes, it moves to Committed. If an error is detected, it moves to Failed, then to Aborted (rolled back). From Aborted, the transaction may be restarted or terminated.

**Q3. What is serializability? Distinguish between conflict and view serializability.**

Serializability ensures that a concurrent schedule produces the same result as some serial schedule. Conflict serializability is verified via a precedence graph (no cycle = conflict serializable). View serializability is broader and covers schedules that are not conflict-serializable but still equivalent to some serial schedule.

**Q4. What is a recoverable schedule? What is a cascadeless schedule?**

A recoverable schedule ensures that if T2 reads data modified by T1, T2 commits only after T1 commits. A cascadeless schedule is stricter: T2 can only read data written by T1 after T1 has committed — eliminates the need for cascading rollbacks.

**Q5. Explain isolation and how it is maintained in a DBMS.**

Isolation ensures that concurrent transactions do not interfere with each other. It is maintained by the concurrency control subsystem using protocols such as locking (2PL) or timestamp ordering. Without isolation, problems such as dirty reads, non-repeatable reads, and phantom reads can occur.

**Q6. What is a conflict in a schedule? Define conflict equivalent and conflict serializable schedules.**

Two operations conflict if they are from different transactions, access the same data item, and at least one is a write. Two schedules are conflict equivalent if they can be transformed into each other by swapping non-conflicting adjacent operations. A schedule is conflict serializable if it is conflict equivalent to some serial schedule.

**Q7. Why is concurrent execution of transactions preferred? What problems can it cause?**

Concurrent execution improves throughput (CPU and I/O overlap), reduces average response time, and makes better use of system resources. Problems: dirty read (reading uncommitted data), non-repeatable read, lost update (two transactions overwrite each other), and phantom read.

---

## Unit 09: Concurrency Control

**Q1. Explain the Two-Phase Locking protocol. Does it guarantee deadlock-freedom?**

2PL has growing and shrinking phases. During the growing phase, a transaction may acquire locks but not release any. During the shrinking phase, it may release locks but not acquire new ones. This ensures conflict serializability. However, 2PL does NOT prevent deadlocks.

**Q2. Distinguish between shared lock and exclusive lock. What is lock compatibility?**

A shared (S) lock allows read; multiple transactions can simultaneously hold S-locks on the same item. An exclusive (X) lock allows reading and writing; only one transaction at a time can hold an X-lock. Compatibility: S-S compatible; S-X incompatible; X-X incompatible.

**Q3. Explain the timestamp-based protocol. What are W_TS(X) and R_TS(X)?**

Each transaction is assigned a unique timestamp when it enters the system. `W_TS(X)` is the timestamp of the last transaction that successfully wrote X; `R_TS(X)` is the timestamp of the last transaction that successfully read X. If a transaction T tries to write X and `R_TS(X) > TS(T)`, abort T. This ensures deadlock-free execution.

**Q4. What is a deadlock? Explain the Coffman conditions.**

A deadlock is a circular dependency where a set of transactions each wait for a resource held by another in the set. The four Coffman conditions: (1) Mutual Exclusion; (2) Hold and Wait; (3) No Preemption; (4) Circular Wait. All four must hold simultaneously for deadlock to occur.

**Q5. Explain Wait-Die and Wound-Wait deadlock prevention schemes.**

Both use timestamps. In Wait-Die: older waits; younger dies (rolls back). In Wound-Wait: older wounds (forces rollback of) younger; younger waits. Both ensure no circular waits.

**Q6. Explain the validation-based (optimistic) concurrency control protocol.**

Three phases: Read Phase — all reads and writes go to local copies. Validation Phase — the DBMS checks if local changes violate serializability. Write Phase — if validation succeeds, local changes are written to the database; else the transaction rolls back and restarts.

**Q7. What is starvation in concurrency control? How is it avoided?**

Starvation occurs when a transaction waits indefinitely for a lock because other transactions keep being given priority, or if the same transaction is repeatedly selected as a victim during deadlock recovery. Prevention: use fair queuing (first-come-first-served); include rollback count in the victim selection cost factor.

---

## Unit 10: SQL DCL/TCL

**Q1. What is DCL? Explain GRANT and REVOKE with syntax.**

DCL (Data Control Language) controls database security by managing user access privileges. GRANT gives a user permission: `GRANT privilege_list ON object TO user [WITH GRANT OPTION];`. REVOKE removes permissions: `REVOKE privilege_list ON object FROM user;`.

**Q2. What is the difference between WHERE and HAVING?**

WHERE filters individual rows before grouping — it cannot use aggregate functions. HAVING filters groups after GROUP BY — it is used with aggregate functions.

**Q3. Explain SAVEPOINT. How is it different from COMMIT?**

SAVEPOINT marks an intermediate point in a transaction to which a partial rollback can be performed: `ROLLBACK TO SAVEPOINT sp1;` undoes changes after the savepoint but keeps earlier changes. COMMIT permanently saves all changes and ends the transaction — no further rollback is possible.

**Q4. Explain the GROUP BY clause with an example.**

GROUP BY groups rows sharing the same values in specified columns so aggregate functions can be applied per group. Example: `SELECT dept_id, AVG(salary) FROM Employee GROUP BY dept_id;` returns the average salary for each department.

**Q5. Explain INITCAP, UPPER, and LOWER character functions.**

UPPER converts all characters to uppercase. LOWER converts all to lowercase. INITCAP capitalizes the first letter of each word and lowercases the rest.

**Q6. What is SUBSTR? Give an example.**

SUBSTR extracts a portion of a string. Syntax: `SUBSTR(string, start_position, length)`. Example: `SUBSTR('Database Management', 9, 10)` returns `Management`.

**Q7. Write SQL to find total salary and number of employees per department, showing only departments with more than 3 employees, ordered by total salary descending.**

```sql
SELECT dept_id, COUNT(*) AS num_emp, SUM(salary) AS total_salary
FROM Employee
GROUP BY dept_id
HAVING COUNT(*) > 3
ORDER BY total_salary DESC;
```

---

## Unit 11: Recovery Systems

**Q1. Explain the ARIES recovery algorithm and its three phases.**

ARIES uses steal + no-force buffer management. Three phases: (1) Analysis — scans log forward from last checkpoint to reconstruct active transactions and dirty pages; (2) Redo — replays all operations from the earliest dirty page forward, restoring the database to the crash state; (3) Undo — scans log backward to roll back all uncommitted transactions.

**Q2. What is Write-Ahead Logging (WAL)? Why is it important?**

WAL states that a log record for a database modification must be written to stable storage before the corresponding data page is written to disk. This guarantees that on crash, the log exists to undo or redo operations. It is the foundation of log-based recovery.

**Q3. Explain steal and force buffer management policies and their implications for recovery.**

Steal: dirty pages can be evicted to disk before commit — requires UNDO. No-steal: dirty pages kept in memory until commit — no undo needed but requires large buffer. Force: all dirty pages written to disk at commit — no redo needed. No-force: pages need not be written at commit — redo required. Most DBMS use Steal+No-Force, requiring both undo and redo.

**Q4. What is checkpointing? Why is it used in recovery?**

Checkpointing periodically writes all dirty pages to disk and records a checkpoint log record. On recovery, the system only needs to process the log from the last checkpoint, drastically reducing recovery time.

**Q5. Classify the types of database failures.**

(1) Transaction failure — logical error or deadlock. (2) System crash — hardware/software failure causing loss of volatile memory; disk contents survive. (3) Disk failure — media crash that destroys non-volatile storage; requires backup restoration.

**Q6. What is shadow paging? How does it differ from log-based recovery?**

Shadow paging maintains a current and a shadow page table. Modified pages are written to new disk locations; the shadow points to old pages. On commit, current replaces shadow. On abort, shadow is restored. Unlike log-based recovery, shadow paging requires no log records but causes disk fragmentation.

**Q7. Explain the terms UNDO and REDO in the context of database recovery.**

UNDO reverses the effects of a transaction that did not commit before a crash — uses old values from the log to restore the pre-transaction state. REDO re-applies the operations of a committed transaction whose changes were not yet on disk — uses new values from the log to bring the database up to the committed state.

---

## Unit 12: Distributed Databases

**Q1. Define a distributed database. What are its key features?**

A distributed database is a collection of logically interrelated databases physically spread across multiple geographic sites, connected by a network, and appearing as a single database to users. Key features: data at multiple sites; each site managed independently by its own DBMS; supports transparent transaction processing.

**Q2. What are the advantages and disadvantages of a DDBMS?**

Advantages: modular expansion, higher reliability (site failure does not stop system), faster local response, lower communication cost. Disadvantages: complex and expensive software, processing overhead for maintaining consistency, harder to guarantee data integrity across sites.

**Q3. Distinguish between homogeneous and heterogeneous distributed databases.**

Homogeneous: identical DBMS and OS at all sites — appears as one unified database. Heterogeneous: different DBMS products, OS, or data models at different sites — complex query and transaction processing. Heterogeneous systems can be federated or unfederated.

**Q4. Explain horizontal, vertical, and hybrid fragmentation.**

Horizontal fragmentation divides a table into row subsets based on a condition; each fragment has all columns but a subset of rows. Vertical fragmentation divides a table into column subsets; each fragment must include the primary key. Hybrid fragmentation combines both.

**Q5. What is distribution transparency? Name and explain its three dimensions.**

Distribution transparency hides the physical distribution details from users. (1) Location transparency — users query tables without knowing which site holds the data; (2) Fragmentation transparency — users query the table as if unfragmented; (3) Replication transparency — users are unaware that multiple copies exist.

**Q6. What is data replication? List its advantages and disadvantages.**

Data replication stores copies of database data at multiple sites. Advantages: high availability, faster local query response, reduced network traffic. Disadvantages: increased storage cost, update complexity (all copies must be synchronized), potential for temporary inconsistency.

**Q7. What is a semi-join in distributed query processing?**

A semi-join is an optimization technique for joining tables stored at different sites. Only the join column(s) are projected and sent to the remote site where they are joined. The result is used to retrieve only the relevant tuples from the remote table, significantly reducing network data transfer.

---

## Unit 13: Cloud Databases

**Q1. What is cloud computing? What are its key characteristics?**

Cloud computing delivers computing resources (servers, storage, databases, software) over the Internet on demand. Key characteristics: (1) On-demand self-service; (2) Broad network access; (3) Resource pooling — physical resources shared among multiple tenants; (4) Rapid elasticity — resources scale up or down; (5) Measured service — usage monitored and billed accordingly.

**Q2. Explain the three cloud service models: IaaS, PaaS, and SaaS.**

IaaS provides fundamental computing infrastructure — virtual machines, storage, networking (e.g., AWS EC2). PaaS provides a managed platform with runtime environment and development tools (e.g., Google App Engine). SaaS delivers complete software applications over the Internet (e.g., Gmail, Salesforce).

**Q3. What are the four cloud deployment models?**

Public Cloud: open to the general public; cost-effective but less secure. Private Cloud: dedicated to one organization; more secure. Community Cloud: shared infrastructure for organizations with common requirements. Hybrid Cloud: combination of public and private clouds.

**Q4. What are the main risks of cloud computing?**

Security and privacy, vendor lock-in, isolation failure (multi-tenant isolation breach), management interface compromise, and incomplete data deletion (data persists on shared hardware).

**Q5. Differentiate between cloud computing and distributed computing.**

Cloud computing delivers IT services on demand over the Internet on a pay-per-use model, focusing on service delivery. Distributed computing coordinates multiple autonomous computers to collaboratively solve a single computational problem, focusing on computation. Cloud is a service-delivery paradigm; distributed computing is a computing technique.

**Q6. What are the characteristics of the SaaS model?**

Software delivered over the Internet; maintained by vendor; subscription or usage-based licensing; automatically updated; accessible from any browser/device; multi-tenant; centrally managed data; no hardware/software maintenance by end user.

**Q7. What is meant by rapid elasticity in cloud computing?**

Rapid elasticity is the ability to scale computing resources up or down quickly and automatically in response to changing workload demands. From the user's perspective, the capacity appears virtually unlimited and always available on demand.

---

## Unit 14: PL/SQL

**Q1. What is PL/SQL? How is it different from SQL?**

PL/SQL is Oracle's procedural extension to SQL. While SQL is a declarative query language, PL/SQL adds procedural constructs: variables, constants, control structures (IF/LOOP), exception handling, procedures, functions, and triggers. PL/SQL sends entire blocks to the database at once, reducing network traffic.

**Q2. Describe the structure of a PL/SQL block. Which sections are mandatory?**

A PL/SQL block has four sections: DECLARE (optional) — declares variables and constants; BEGIN (mandatory) — contains executable statements; EXCEPTION (optional) — handles runtime errors; END (mandatory) — marks the end of the block. Every statement ends with a semicolon.

**Q3. What is a trigger in PL/SQL? What events can fire a trigger?**

A trigger is a stored PL/SQL program that automatically executes in response to a specified event. Events: DML events (INSERT, UPDATE, DELETE); DDL events (CREATE, ALTER, DROP); Database-level events (LOGON, LOGOFF, STARTUP, SHUTDOWN, SERVERERROR).

**Q4. Differentiate between BEFORE and AFTER triggers with an example use case.**

A BEFORE trigger fires before the triggering DML executes — useful for validating or modifying incoming data before it is written. An AFTER trigger fires after the statement executes — useful for auditing, logging, or updating other tables. INSTEAD OF triggers fire instead of the DML and are used on non-updatable views.

**Q5. Explain the OLD and NEW references in a row-level trigger.**

In a row-level trigger (FOR EACH ROW), `:OLD.column_name` references the value before the triggering operation, and `:NEW.column_name` references the value after. For INSERT, `:OLD` is NULL. For DELETE, `:NEW` is NULL. For UPDATE, both are meaningful.

**Q6. What are the benefits of using triggers?**

Triggers automatically: generate derived column values; enforce complex integrity rules beyond basic constraints; log table access for auditing; synchronize related tables when one changes; enforce security; prevent invalid transactions by raising exceptions before changes are committed.

**Q7. Write a PL/SQL anonymous block that declares a variable, assigns it a value, and prints it.**

```sql
DECLARE
  emp_name VARCHAR2(50) := 'Alice';
  emp_salary NUMBER := 75000;
BEGIN
  dbms_output.put_line('Employee: ' || emp_name);
  dbms_output.put_line('Salary: ' || emp_salary);
END;
/
```
