# DATABASE MANAGEMENT SYSTEMS — Comprehensive Exam Prep

---

## Overall Book Summary

This book covers the full lifecycle of database systems from first principles through to advanced topics. It begins with foundational concepts of DBMS (what a database is, its architecture, and why it exists), moves through the conceptual modelling phase using ER diagrams, then into the relational model with its algebra and SQL language. A large central portion focuses on database design correctness through normalization (1NF through BCNF/4NF) and functional dependencies. The book then addresses the operational challenges of running a database in multi-user environments: transaction management (ACID properties), concurrency control (locks, 2PL, timestamps), and recovery from failure (log-based recovery, ARIES). Later units extend into distributed databases and cloud computing models. The final unit introduces PL/SQL, Oracle's procedural extension to SQL, including triggers. Together the 14 units build a complete picture: design well, query efficiently, keep data consistent, and recover gracefully from failure.

---

## Table of Contents

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

### Summary

Introduces the core vocabulary and motivation for DBMS. Contrasts the traditional file-based system approach with the database approach. Covers the three-level ANSI/SPARC architecture (external, conceptual, internal) and the roles of various DBMS users. Establishes why DBMS is preferred over flat-file systems (data independence, reduced redundancy, concurrent access, security, integrity).

### Key Definitions and Concepts

- **Database**: An organized, interrelated collection of persistent data managed for multiple users/applications.
- **DBMS (Database Management System)**: Software that creates, manages, and controls access to a database (e.g., Oracle, MySQL, PostgreSQL).
- **Data**: Raw, unprocessed facts (numbers, text, images). Plural of "datum."
- **Information**: Data that has been processed and given context to increase knowledge.
- **Metadata**: Data about data — describes the structure, meaning, and constraints of the actual data (stored in the data dictionary/catalog).
- **Data Processing**: Converting raw data into meaningful information.
- **Three-Level Architecture (ANSI/SPARC)**:
  - **External Level (View)**: What individual users see — a subset or derived view of the database.
  - **Conceptual Level**: The logical description of the entire database structure (tables, relationships, constraints).
  - **Internal Level**: Physical storage details — how data is actually stored on disk (indexes, file organizations).
- **Data Independence**:
  - **Physical Data Independence**: Ability to change internal (physical) schema without affecting the conceptual schema.
  - **Logical Data Independence**: Ability to change the conceptual schema without affecting external views.
- **Data Redundancy**: Storing the same data in multiple places — leads to inconsistency and wasted space.
- **Data Integrity**: Ensuring accuracy and consistency of data through constraints.
- **Data Dictionary / System Catalog**: Repository storing metadata about the database schema.
- **DBA (Database Administrator)**: Person responsible for database design, security, performance tuning, and backup.
- **Users of DBMS**: Naive users, application programmers, sophisticated users, DBA.

### Key Formulas / Notes

- DBMS replaces the file-system approach by centralizing data management and enforcing rules automatically.
- Advantages of DBMS: minimal redundancy, data sharing, security enforcement, integrity constraints, backup and recovery, concurrent access.
- Disadvantages: complexity, large initial cost, performance overhead, single point of failure risk.

### Likely Exam Questions

**Q1. Define DBMS. List its advantages over a traditional file-based system.**

**A:** A DBMS is software that stores, retrieves, and manages interrelated data in a structured way. Advantages over file systems: eliminates data redundancy, enforces data integrity, supports concurrent multi-user access, provides data security and access control, ensures data independence, and offers backup/recovery mechanisms.

**Q2. Explain the three-level ANSI/SPARC architecture with the two types of data independence.**

**A:** The three levels are: (1) External — user views; (2) Conceptual — logical schema (all tables and relationships); (3) Internal — physical storage. Physical data independence means changing storage does not affect the conceptual schema. Logical data independence means changing the conceptual schema does not affect external views.

**Q3. What is metadata? Where is it stored?**

**A:** Metadata is "data about data" — it describes the structure (table names, column types, constraints, relationships) of the database rather than the actual data values. It is stored in the system catalog (data dictionary), which the DBMS maintains automatically.

**Q4. Distinguish between data and information.**

**A:** Data are raw, unprocessed facts (e.g., the number 500). Information is data that has been processed, organized, and given context to be meaningful (e.g., "Employee salary is Rs. 500"). Data becomes information when it is relevant and interpretable.

**Q5. What is physical data independence and why is it important?**

**A:** Physical data independence is the ability to modify the internal (physical) storage schema — such as changing file organization or adding indexes — without requiring any changes to the conceptual or external schemas. It is important because it allows database administrators to optimize storage and performance without affecting application programs or user views.

**Q6. List and describe four types of DBMS users.**

**A:** (1) Naive users — casual, front-end users who interact through pre-built forms/apps; (2) Application programmers — write programs using DML/DDL; (3) Sophisticated users — analysts who write complex queries directly; (4) DBA — manages the whole database system including security, schema design, and performance.

**Q7. What is a data dictionary?**

**A:** A data dictionary (system catalog) is a repository managed by the DBMS that stores metadata: table names, column definitions, data types, indexes, user access rights, and integrity constraints. The DBMS consults it to process queries and enforce rules.

---

## Unit 02: Database Design and ER Model

### Summary

Covers the process of designing a database starting from requirements analysis through to an ER diagram. Explains entities, attributes, relationships, and constraints (key and participation). Introduces the Extended ER (EER) model concepts: subclasses/superclasses, generalization, specialization, and aggregation.

### Key Definitions and Concepts

- **Database Design Steps**: Requirements Analysis → Conceptual Design (ER model) → Logical Design (relational schema) → Schema Refinement (normalization) → Physical Design → Security Design.
- **Entity**: A real-world object or concept distinguishable from other objects (e.g., Employee, Department). Represented by a **rectangle**.
- **Strong Entity**: Has its own primary key; can exist independently.
- **Weak Entity**: Has no primary key of its own; depends on a strong (owner) entity for identity. Represented by a **double rectangle**; its identifying relationship by a **double diamond**.
- **Relationship**: An association between two or more entities. Represented by a **diamond**.
- **Attribute**: A property that describes an entity or relationship. Represented by an **ellipse**.
  - **Key attribute**: Uniquely identifies an entity (underlined in ER diagram).
  - **Composite attribute**: Made up of multiple sub-attributes (e.g., Address = Street + City + ZIP).
  - **Multivalued attribute**: Can have multiple values (e.g., Phone numbers). Represented by a **double ellipse**.
  - **Derived attribute**: Value can be computed from another attribute (e.g., Age from Date of Birth). Represented by a **dashed ellipse**.
- **Cardinality Ratios** (for binary relationships):
  - **1:1** — One instance of A relates to one instance of B.
  - **1:N** — One instance of A relates to many instances of B.
  - **M:N** — Many instances of A relate to many instances of B.
- **Key Constraint**: Restricts the number of entities on one side of a relationship (shown by an **arrow** in ER diagram).
- **Participation Constraint**:
  - **Total participation**: Every entity in the set must participate (shown by **double line**).
  - **Partial participation**: Some entities may not participate (shown by single line).
- **Extended ER (EER) Model** adds:
  - **Superclass / Subclass (IS-A hierarchy)**: A subclass inherits all attributes of its superclass (e.g., Vehicle → Car, Truck).
  - **Specialization**: Top-down — decomposing a superclass into subclasses based on differentiating characteristics.
  - **Generalization**: Bottom-up — combining entities with common attributes into a single superclass.
  - **Aggregation**: Treating a relationship between entities as a higher-level entity so it can participate in another relationship.

### ER Diagram Notation Summary

| Symbol | Meaning |
|--------|---------|
| Rectangle | Entity |
| Double Rectangle | Weak Entity |
| Diamond | Relationship |
| Double Diamond | Identifying Relationship (for weak entity) |
| Ellipse | Attribute |
| Double Ellipse | Multivalued Attribute |
| Dashed Ellipse | Derived Attribute |
| Underlined text in ellipse | Key Attribute |
| Arrow on line | Key Constraint (at-most-one side) |
| Double line | Total Participation |

### Likely Exam Questions

**Q1. What is a weak entity? How is it represented in an ER diagram?**

**A:** A weak entity cannot be uniquely identified by its own attributes alone; it depends on a strong (owner) entity. For example, a bank account's transactions are weak entities — they cannot exist without the account. In an ER diagram, a weak entity is represented by a double rectangle, and its identifying relationship by a double diamond.

**Q2. Distinguish between specialization and generalization with examples.**

**A:** Specialization is a top-down process — starting from a general entity (superclass) and breaking it into specialized subentities (subclasses) with specific attributes (e.g., Vehicle → Car, Truck, Motorcycle). Generalization is bottom-up — combining multiple entities that share common attributes into a single superclass (e.g., Car + Truck + Motorcycle → Vehicle).

**Q3. List and explain the four types of attributes in an ER model.**

**A:** (1) Key attribute — uniquely identifies an entity (e.g., Employee ID); (2) Composite attribute — made of sub-attributes (e.g., Name = First + Last); (3) Multivalued attribute — can hold multiple values (e.g., Phone numbers); (4) Derived attribute — computed from another attribute (e.g., Age from Date of Birth).

**Q4. What is aggregation in the EER model? Give an example.**

**A:** Aggregation represents a relationship-set as a higher-level entity so it can participate in another relationship. For example, the relationship "Works On" between Employee and Project can itself be an entity, allowing a Manager to manage the entire "Works On" association rather than just one of its participants.

**Q5. Explain key constraint and participation constraint with an example.**

**A:** Key constraint limits how many entities on one side of a relationship can be related. For example, each Department can have at most one Manager (1:1 key constraint on the Manages relationship). Participation constraint specifies whether all or some entities must participate: total participation means every entity must participate (e.g., every Department must be managed by someone), partial participation means some may not (e.g., not every Employee needs to be a manager).

**Q6. What are the steps in the database design process?**

**A:** (1) Requirements Analysis — understand what data and operations are needed; (2) Conceptual Design — create an ER diagram; (3) Logical Design — convert ER to relational schema; (4) Schema Refinement — normalize to remove anomalies; (5) Physical Design — choose indexes, file organization; (6) Security Design — define access roles and privileges.

**Q7. Define cardinality ratio and give examples of each type.**

**A:** Cardinality ratio describes how many entity instances can participate in a relationship. One-to-one (1:1): one person has one passport. One-to-many (1:N): one customer places many orders. Many-to-one (N:1): many students attend one college. Many-to-many (M:N): students take many courses and courses have many students.

---

## Unit 03: Relational Database

### Summary

Introduces the relational model proposed by E.F. Codd. Explains the fundamental concepts of relations (tables), tuples (rows), attributes (columns), domains, and keys. Covers the basic relational algebra operators used to query data. Introduces Views and provides an overview of SQL categories (DDL, DML, DCL, DQL).

### Key Definitions and Concepts

- **Relational Model**: Organizes data as a collection of named tables (relations); proposed by E.F. Codd.
- **Relation**: A two-dimensional table with rows and columns.
- **Tuple**: A single row of a relation; represents one record.
- **Attribute**: A column in a relation; has a name and domain.
- **Domain**: The set of permissible values for an attribute.
- **Degree**: Total number of attributes (columns) in a relation.
- **Cardinality**: Total number of tuples (rows) in a relation.
- **Relation Schema**: The structure — relation name + list of attributes with their domains (e.g., STUDENT(ID, Name, Age)).
- **Relation Instance**: The actual set of tuples in a relation at a given moment.
- **Primary Key**: An attribute (or set of attributes) that uniquely identifies each tuple; cannot be NULL.
- **Foreign Key**: An attribute in one relation that references the primary key of another, enforcing referential integrity.
- **Relational Algebra Operators**:
  - **Select (σ)**: Filters rows based on a condition. `σ_condition(R)` — unary operator.
  - **Project (∏)**: Selects specific columns. `∏_A1,A2(R)` — unary operator; removes duplicates.
  - **Union (∪)**: All tuples from R or S (union-compatible required). Eliminates duplicates.
  - **Set Intersection (∩)**: Tuples in both R and S.
  - **Set Difference (−)**: Tuples in R but not in S.
  - **Cartesian Product (×)**: Combines every tuple of R with every tuple of S (also called cross product).
  - **Rename (ρ)**: Renames a relation or its attributes. `ρ_new_name(R)`.
- **View**: A virtual table defined by a SELECT query; not physically stored (in most DBMS). Created with `CREATE VIEW`. Types: Read-Only View and Updateable View.
- **SQL Categories**:
  - **DDL** — Data Definition Language (CREATE, ALTER, DROP, TRUNCATE)
  - **DML** — Data Manipulation Language (INSERT, UPDATE, DELETE)
  - **DQL** — Data Query Language (SELECT)
  - **DCL** — Data Control Language (GRANT, REVOKE)
  - **TCL** — Transaction Control Language (COMMIT, ROLLBACK, SAVEPOINT)

### Key Relational Algebra Notation

```
Select:      σ_condition(R)                  e.g., σ_salary>50000(Employee)
Project:     ∏_A1,A2,...(R)                  e.g., ∏_name,salary(Employee)
Union:       R ∪ S
Intersection: R ∩ S
Difference:  R − S
Cartesian:   R × S
Rename:      ρ_new(R)
```

### Likely Exam Questions

**Q1. Who proposed the relational model? What are the key concepts of the relational model?**

**A:** E.F. Codd proposed the relational model in 1970. Key concepts: data stored in relations (tables); each row is a tuple; each column is an attribute; every attribute has a domain; a primary key uniquely identifies tuples; foreign keys enforce referential integrity; physical storage is independent of the logical model.

**Q2. Distinguish between degree and cardinality of a relation.**

**A:** Degree is the number of attributes (columns) in a relation — a structural property. Cardinality is the number of tuples (rows) — a state property that changes as data is inserted or deleted. For a relation STUDENT(ID, Name, Age, GPA), degree = 4. If it has 100 students, cardinality = 100.

**Q3. Explain the Select and Project operations of relational algebra with examples.**

**A:** Select (σ) filters rows based on a condition — `σ_salary>20000(Employee)` returns all employees earning more than 20000. Project (∏) selects specific columns — `∏_name,salary(Employee)` returns only the name and salary columns (duplicate rows removed). Select is a horizontal cut; Project is a vertical cut.

**Q4. What is a View in a database? What are its types?**

**A:** A view is a virtual table created from a SELECT query and stored with a name. It does not physically store data but provides a logical window into the underlying tables. Types: (1) Read-Only View — only SELECT operations allowed; (2) Updateable View — allows INSERT, UPDATE, and DELETE, but only if defined from a single table, includes the primary key, and includes all NOT NULL columns.

**Q5. What is the difference between union and set intersection operations?**

**A:** Union (R ∪ S) returns all tuples that appear in R or in S or in both, eliminating duplicates. Both relations must be union-compatible (same number and compatible domains of attributes). Set intersection (R ∩ S) returns only those tuples that appear in both R and S. Difference (R − S) returns tuples in R that are not in S.

**Q6. What is a foreign key and how does it enforce referential integrity?**

**A:** A foreign key is an attribute in one table that references the primary key of another table. It enforces referential integrity by ensuring that a foreign key value either matches an existing primary key value in the referenced table or is NULL. For example, an ORDER table's CustomerID is a foreign key referencing CUSTOMER's CustomerID, preventing orders from existing for non-existent customers.

**Q7. Distinguish between unary and binary relational algebra operations.**

**A:** Unary operations take a single relation as input: Select (σ), Project (∏), and Rename (ρ). Binary operations take two relations as input: Union (∪), Intersection (∩), Set Difference (−), Cartesian Product (×), and Join. Union is a binary operation.

---

## Unit 04: SQL (DDL)

### Summary

Provides a detailed treatment of Structured Query Language with focus on DDL commands (CREATE, ALTER, DROP, TRUNCATE) and SQL constraints. Also covers DML (INSERT, UPDATE, DELETE), DCL (GRANT, REVOKE), TCL (COMMIT, ROLLBACK, SAVEPOINT), and DQL (SELECT). Explains SQL data types and all four types of SQL JOINs.

### Key Definitions and Concepts

- **SQL**: Structured Query Language — the standard language for RDBMS (ANSI standard). Originally called Sequel; developed at IBM.
- **DDL Commands**:
  - `CREATE TABLE` — creates a new table with specified columns and data types.
  - `ALTER TABLE` — modifies the structure (add/modify/drop columns).
  - `DROP TABLE` — removes the table and all its data permanently.
  - `TRUNCATE TABLE` — removes all rows but keeps the table structure; faster than DELETE; cannot be rolled back (auto-committed in most DBMS).
- **DML Commands**: `INSERT INTO`, `UPDATE ... SET`, `DELETE FROM`.
- **DCL Commands**: `GRANT`, `REVOKE`.
- **TCL Commands**: `COMMIT`, `ROLLBACK`, `SAVEPOINT`.
- **DQL**: `SELECT` — the primary data retrieval command.
- **SQL Constraints**:
  - `NOT NULL` — column cannot contain NULL.
  - `UNIQUE` — all values in column must be distinct.
  - `PRIMARY KEY` — unique + not null; uniquely identifies each row.
  - `FOREIGN KEY` — references primary key of another table.
  - `DEFAULT` — provides a default value when none is specified.
  - `CHECK` — ensures values satisfy a specified condition.
  - `INDEX` — improves retrieval speed (not a constraint per se).
- **Common SQL Data Types**: `INT`, `VARCHAR(n)`, `CHAR(n)`, `DATE`, `FLOAT`, `DECIMAL(p,s)`, `BOOLEAN`.
- **SQL JOIN Types**:
  - `INNER JOIN`: Returns rows with matching values in both tables.
  - `LEFT JOIN` (Left Outer): All rows from left table + matched rows from right (NULL if no match on right).
  - `RIGHT JOIN` (Right Outer): All rows from right table + matched rows from left (NULL if no match on left).
  - `FULL JOIN` (Full Outer): All rows from both tables; NULL where no match.

### Key SQL Syntax Snippets

```sql
-- DDL
CREATE TABLE EMPLOYEE (
  EMP_ID   INT PRIMARY KEY,
  NAME     VARCHAR(50) NOT NULL,
  AGE      INT CHECK (AGE > 18),
  DEPT_ID  INT DEFAULT 1
);

ALTER TABLE EMPLOYEE ADD ADDRESS VARCHAR(100);
ALTER TABLE EMPLOYEE MODIFY NAME VARCHAR(100);
DROP TABLE EMPLOYEE;
TRUNCATE TABLE EMPLOYEE;

-- DML
INSERT INTO EMPLOYEE (EMP_ID, NAME) VALUES (1, 'Alice');
UPDATE EMPLOYEE SET AGE = 30 WHERE EMP_ID = 1;
DELETE FROM EMPLOYEE WHERE EMP_ID = 1;

-- JOIN
SELECT E.NAME, P.DEPARTMENT
FROM EMPLOYEE E
INNER JOIN PROJECT P ON E.EMP_ID = P.EMP_ID;
```

### Likely Exam Questions

**Q1. Differentiate between DROP TABLE and TRUNCATE TABLE.**

**A:** `DROP TABLE` deletes the table itself along with all its data, constraints, and indexes — the table no longer exists afterward. `TRUNCATE TABLE` deletes all rows from the table but keeps the table structure (schema) intact, ready for new data. TRUNCATE is faster and auto-committed in most DBMS; it cannot be rolled back. DROP can be rolled back in some DBMS before the DDL auto-commit.

**Q2. What are SQL constraints? Explain PRIMARY KEY and FOREIGN KEY.**

**A:** Constraints are rules applied to columns to maintain data integrity. PRIMARY KEY uniquely identifies each row in a table — values must be unique and not null; only one primary key per table. FOREIGN KEY is an attribute that references the primary key of another table, ensuring referential integrity (e.g., an ORDER must reference a valid CUSTOMER).

**Q3. Explain the four types of SQL JOINs with examples.**

**A:** INNER JOIN returns only rows with matching values in both tables. LEFT JOIN returns all rows from the left table and matching rows from the right (NULL for unmatched). RIGHT JOIN returns all rows from the right table and matching rows from the left (NULL for unmatched). FULL JOIN returns all rows from both tables, with NULL wherever there is no match. Example: `SELECT * FROM A LEFT JOIN B ON A.id = B.a_id` returns all A rows even if they have no matching B row.

**Q4. What is the difference between DELETE and TRUNCATE?**

**A:** `DELETE` is a DML command that removes rows conditionally (using WHERE clause) or all rows; it can be rolled back and fires triggers. `TRUNCATE` is a DDL command that removes all rows instantly without using a WHERE clause; it is auto-committed in most DBMS, cannot be rolled back, does not fire row-level triggers, and resets the high-water mark.

**Q5. What is TCL? List its commands and explain ROLLBACK.**

**A:** TCL (Transaction Control Language) controls the permanence of database changes made by DML operations. Commands: `COMMIT` — permanently saves changes; `ROLLBACK` — undoes all changes since the last COMMIT or SAVEPOINT, restoring the database to its previous state; `SAVEPOINT name` — marks a point in a transaction to which a partial rollback can be performed later.

**Q6. Explain the NOT NULL and CHECK constraints with examples.**

**A:** `NOT NULL` ensures a column always has a value — inserting or updating a row with NULL in that column is rejected (e.g., `NAME VARCHAR(50) NOT NULL`). `CHECK` ensures values in a column satisfy a condition — (e.g., `AGE INT CHECK (AGE >= 18)` rejects any age below 18). Both help maintain data integrity at the column level.

**Q7. Write SQL to create a table STUDENT with roll number (PK), name (not null), age (default 18), and address (unique).**

**A:**
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

### Summary

Deepens the study of DML: SELECT with conditions, string pattern matching (LIKE), the use of subqueries (nested queries) within SELECT, INSERT, UPDATE, and DELETE. Explains constraints in detail and revisits Views with creation syntax. Covers correlated subqueries and the rules governing subquery usage.

### Key Definitions and Concepts

- **SELECT Statement**: Core DQL command to retrieve data.
  - `SELECT * FROM table` — all columns.
  - `SELECT col1, col2 FROM table WHERE condition` — specific columns with filter.
  - `SELECT col AS alias FROM table` — rename columns in result.
- **LIKE Operator**: Pattern matching for strings.
  - `%` — matches any sequence of characters (including empty).
  - `_` (underscore) — matches exactly one character.
  - Example: `WHERE name LIKE 'H_r%'` — name starts with H, third char is r.
- **Subquery (Nested Query / Inner Query)**: A SELECT statement embedded within another SQL statement (inside WHERE, HAVING, or FROM clause).
  - Must be enclosed in parentheses.
  - Subqueries returning multiple rows use `IN`, `ANY`, `ALL`, `EXISTS`.
  - ORDER BY cannot be used inside a subquery (GROUP BY can be used instead).
  - Cannot include BLOB, ARRAY, CLOB references in SELECT list.
- **Subquery with INSERT**: `INSERT INTO table2 SELECT * FROM table1 WHERE ...`
- **Subquery with UPDATE**: `UPDATE table SET col = val WHERE col IN (SELECT ...)`
- **Subquery with DELETE**: `DELETE FROM table WHERE col IN (SELECT ...)`
- **View Creation**:
  ```sql
  CREATE [OR REPLACE] VIEW view_name AS
  SELECT col1, col2 FROM table WHERE condition;
  ```
  - `WITH READ ONLY` makes it non-updateable.
- **Integrity Constraints** (recap): NOT NULL, DEFAULT, UNIQUE, PRIMARY KEY, FOREIGN KEY, CHECK, INDEX.
- **Dropping a Constraint**: `ALTER TABLE EMPLOYEES DROP CONSTRAINT constraint_name;`

### Key Syntax Snippets

```sql
-- Pattern matching
SELECT name FROM Employee WHERE name LIKE 'H_r%';

-- Subquery with SELECT
SELECT * FROM CUSTOMERS
WHERE ID IN (SELECT ID FROM CUSTOMERS WHERE SALARY > 4500);

-- Subquery with UPDATE
UPDATE table SET col = new_val
WHERE col IN (SELECT col FROM another_table WHERE condition);

-- Subquery with DELETE
DELETE FROM TABLE_NAME
WHERE col IN (SELECT col FROM another_table WHERE condition);

-- Create view
CREATE OR REPLACE VIEW CUSTOMERS_VIEW AS
SELECT name, age FROM CUSTOMERS;

-- Drop view
DROP VIEW view_name;
```

### Likely Exam Questions

**Q1. What is a subquery? What are the rules for writing subqueries?**

**A:** A subquery (nested or inner query) is a SELECT statement embedded within another SQL statement, usually in the WHERE or HAVING clause. Rules: must be enclosed in parentheses; a single-row subquery used with `=` must return exactly one row; multi-row subqueries must use `IN`, `ANY`, or `ALL`; ORDER BY cannot appear in a subquery; cannot reference BLOB/ARRAY/CLOB types in SELECT list.

**Q2. Explain the LIKE operator with examples of % and _ wildcards.**

**A:** LIKE performs pattern matching on string values. `%` matches any zero or more characters. `_` matches exactly one character. Examples: `LIKE 'A%'` matches any name starting with A; `LIKE '%son'` matches strings ending in "son"; `LIKE '_r%'` matches strings where the second character is r; `LIKE 'H_r%'` matches strings starting with H, third character r, followed by anything.

**Q3. How is a subquery used with the UPDATE statement?**

**A:** A subquery in UPDATE identifies which rows to modify. Syntax:
```sql
UPDATE table
SET column = new_value
WHERE column IN (SELECT column FROM other_table WHERE condition);
```
This updates rows whose column value matches results returned by the inner SELECT.

**Q4. What is a View? How do you create and drop it?**

**A:** A view is a named virtual table stored as a SELECT query. It does not hold data physically but provides a logical abstraction. Create: `CREATE VIEW v_name AS SELECT ... FROM ... WHERE ...;`. Drop: `DROP VIEW v_name;`. Using `OR REPLACE` recreates the view if it already exists. Adding `WITH READ ONLY` prevents DML on the view.

**Q5. Distinguish between a correlated and non-correlated subquery.**

**A:** A non-correlated subquery is independent — it executes once and returns a result used by the outer query (e.g., `WHERE salary > (SELECT AVG(salary) FROM emp)`). A correlated subquery references columns from the outer query and is re-evaluated for each row of the outer query (e.g., `WHERE salary > (SELECT AVG(salary) FROM emp WHERE dept = e.dept)`).

**Q6. What is the syntax for a SELECT statement? Explain each clause.**

**A:** `SELECT column_list FROM table WHERE condition ORDER BY col;` — SELECT specifies which columns to retrieve; FROM names the table(s); WHERE filters rows based on a condition; ORDER BY sorts the result set (ASC by default, DESC for descending). Additional clauses: GROUP BY groups rows, HAVING filters groups.

**Q7. Write a query to find all employees whose name starts with 'H' and has 'r' as the third character.**

**A:** `SELECT * FROM Employee WHERE name LIKE 'H_r%';` — H is the first character, _ matches any single character (second position), r is the third character, % matches anything after.

---

## Unit 06: Relational Languages

### Summary

Covers the formal foundations underlying SQL: Tuple Relational Calculus (TRC) and Domain Relational Calculus (DRC). Introduces Query-by-Example (QBE) as a graphical alternative to SQL. Explains all SQL aggregate functions (COUNT, SUM, AVG, MIN, MAX) in detail with examples.

### Key Definitions and Concepts

- **Relational Calculus**: Non-procedural (declarative) query language — describes *what* to retrieve, not *how*. Alternative to relational algebra.
- **Tuple Relational Calculus (TRC)**:
  - A query is expressed as `{t | P(t)}` — the set of all tuples t satisfying predicate P(t).
  - Uses existential (`∃`) and universal (`∀`) quantifiers.
  - Influenced the design of SQL.
- **Domain Relational Calculus (DRC)**:
  - A query is expressed as `{<x1, x2, ..., xn> | P(x1, x2, ..., xn)}` — domain variables represent attribute values.
  - Influenced the design of QBE.
- **TRC vs DRC**: In TRC, variables range over tuples; in DRC, variables range over individual attribute (domain) values.
- **Query-by-Example (QBE)**:
  - Developed by Moshe Zloof at IBM (1970).
  - Graphical query language — user fills in templates rather than typing full queries.
  - Based on Domain Relational Calculus.
  - Uses `P.` (print) to indicate which fields should appear in the result.
  - Domain variables are prefixed with underscore (`_`).
  - No syntax errors — wrong queries give wrong answers or no results, not errors.
  - Used in Microsoft Access Query Design Grid.
- **Aggregate Functions**: Group multiple row values into a single result.
  - `COUNT(*)` — counts all rows including NULLs.
  - `COUNT(col)` — counts non-NULL values in a column.
  - `COUNT(DISTINCT col)` — counts distinct non-NULL values.
  - `SUM(col)` — sum of non-NULL values.
  - `AVG(col)` = SUM(col) / COUNT(col) — average of non-NULL values.
  - `MIN(col)` — minimum value (ignoring NULLs).
  - `MAX(col)` — maximum value (ignoring NULLs).

### Key TRC / DRC Examples

```
TRC: Find loans >= 10000:
{t | t ∈ loan ∧ t[amount] >= 10000}

TRC: Find loan numbers >= 10000 (projection):
{t | ∃ s ∈ loan (t[loan_number] = s[loan_number] ∧ s[amount] >= 10000)}

DRC: Find loans >= 100:
{<l, b, a> | <l, b, a> ∈ loan ∧ (a ≥ 100)}
```

### Likely Exam Questions

**Q1. What is Tuple Relational Calculus? How does it differ from relational algebra?**

**A:** TRC is a non-procedural (declarative) query language where queries describe the desired result using predicates rather than step-by-step operations. A query has the form `{t | P(t)}` — all tuples t satisfying predicate P. Relational algebra is procedural — it specifies the sequence of operations to retrieve data. Both have equivalent expressive power but TRC is declarative and influenced SQL.

**Q2. What is QBE? How does it differ from SQL?**

**A:** QBE (Query-by-Example) is a graphical query language where users fill in example tables rather than writing queries. It is based on DRC and uses domain variables (prefixed with _). Differences from SQL: QBE is visual (fill-in-the-blanks) while SQL is textual; QBE does not produce syntax errors; non-specialists find QBE easier; in QBE the user does not need to remember attribute names since they are displayed in the template.

**Q3. Explain the COUNT aggregate function and its three variants.**

**A:** COUNT returns the number of rows. Three variants: `COUNT(*)` counts all rows including those with NULL values; `COUNT(column_name)` counts rows where the column is not NULL; `COUNT(DISTINCT column_name)` counts the number of distinct non-NULL values in the column.

**Q4. What is the difference between TRC and DRC?**

**A:** In TRC, variables range over entire tuples — each variable represents a complete row. In DRC, variables range over individual field (domain) values — each variable represents a single attribute value. TRC has influenced SQL more; DRC has influenced QBE more. Both have the same expressive power as relational algebra.

**Q5. Write a TRC query to find names of customers who have both a loan and an account.**

**A:**
```
{t | ∃ s ∈ borrower (t[customer_name] = s[customer_name])
     ∧ ∃ u ∈ depositor (t[customer_name] = u[customer_name])}
```

**Q6. How is AVG calculated? Write the formula.**

**A:** `AVG(salary) = SUM(salary) / COUNT(salary)` — averages only non-NULL values. For distinct values: `AVG(DISTINCT salary) = SUM(DISTINCT salary) / COUNT(DISTINCT salary)`.

**Q7. What are the advantages of QBE over SQL for non-specialists?**

**A:** QBE displays the table templates automatically, so users do not need to memorize attribute or relation names. Queries are formed by filling example values rather than writing structured text — more intuitive for casual users. No syntax errors are possible (wrong queries yield empty or wrong results, not crash). It is supported by most database frontend tools such as Microsoft Access.

---

## Unit 07: Relational Database Design

### Summary

Covers the formal theory of relational database design: functional dependencies, transitive and multivalued dependencies, and normalization through 1NF, 2NF, 3NF, BCNF, and 4NF. Explains three types of anomalies that arise in poorly designed databases and how normalization resolves them.

### Key Definitions and Concepts

- **Good Database Design Features**: Faithfulness (accurate constraints), no redundancy, simplicity.
- **Functional Dependency (FD)**: `A → B` — for each value of A, there is exactly one value of B. A is the determinant, B is dependent.
- **Full Functional Dependency**: B is fully functionally dependent on A if it depends on A but not on any proper subset of A (important for 2NF).
- **Transitive Dependency**: `A → B → C` — C depends on A through B (where B is non-key). Violates 3NF.
- **Multivalued Dependency (MVD)**: `A →→ B` — for a single value of A, multiple values of B exist, independent of other attributes. Involves at least three attributes.
- **Three Anomalies** (in unnormalized tables):
  - **Update Anomaly**: Same info stored in multiple rows; updating one but not others causes inconsistency.
  - **Insertion Anomaly**: Cannot record certain data without providing unrelated data (e.g., cannot add a course without a student enrolled).
  - **Deletion Anomaly**: Deleting one fact inadvertently deletes another (e.g., deleting the last student in a course deletes the course info).
- **Normalization**: Process of organizing relations to reduce redundancy and eliminate anomalies by progressively applying normal form rules.
- **1NF (First Normal Form)**: Every attribute contains only atomic (indivisible) values — no multivalued or composite attributes. No repeating groups.
- **2NF (Second Normal Form)**: Must be in 1NF + all non-key attributes are fully functionally dependent on the entire primary key (no partial dependencies). Relevant only when the primary key is composite.
- **3NF (Third Normal Form)**: Must be in 2NF + no transitive dependencies. For every non-trivial FD `X → Y`, either X is a superkey or Y is a prime attribute (part of some candidate key).
- **BCNF (Boyce-Codd Normal Form)**: Stricter than 3NF. For every non-trivial FD `X → Y`, X must be a superkey. Handles anomalies that 3NF misses.
- **4NF (Fourth Normal Form)**: Must be in BCNF + no non-trivial multivalued dependencies. Eliminates redundancy caused by MVDs.
- **Armstrong's Axioms** (for FD inference): Reflexivity, Augmentation, Transitivity.

### Normal Form Progression Summary

| Normal Form | Requirement |
|-------------|-------------|
| 1NF | All attributes atomic; no repeating groups |
| 2NF | 1NF + no partial dependencies on composite PK |
| 3NF | 2NF + no transitive dependencies (non-key → non-key) |
| BCNF | For every FD X→Y, X must be a superkey |
| 4NF | BCNF + no non-trivial multivalued dependencies |

### Likely Exam Questions

**Q1. What is a functional dependency? Explain with an example.**

**A:** A functional dependency `A → B` means that for each value of attribute A, there is exactly one value of attribute B — knowing A determines B. Example: in a STUDENT table, `Roll_No → Student_Name` because each roll number maps to exactly one name. A is called the determinant, B is the dependent.

**Q2. What is normalization? Why is it needed?**

**A:** Normalization is the systematic process of organizing relations to minimize data redundancy and eliminate update, insertion, and deletion anomalies. It decomposes tables into smaller, well-structured tables connected by keys. It is needed because unnormalized tables can have redundant data that leads to inconsistencies when data is modified.

**Q3. Explain 1NF, 2NF, and 3NF with conditions for each.**

**A:** 1NF: all attribute values must be atomic (single-valued); no repeating groups or multivalued attributes in a single cell. 2NF: must be in 1NF; all non-key attributes must be fully functionally dependent on the entire primary key (eliminate partial dependencies — where a non-key attribute depends only on part of a composite primary key). 3NF: must be in 2NF; no transitive dependencies (a non-key attribute should not depend on another non-key attribute).

**Q4. What is BCNF? How does it differ from 3NF?**

**A:** BCNF (Boyce-Codd Normal Form) is a stricter version of 3NF. In 3NF, for every FD `X → Y`, either X is a superkey OR Y is a prime attribute. In BCNF, for every FD `X → Y`, X must always be a superkey — Y cannot save a relation that violates the condition. BCNF eliminates anomalies that some 3NF relations still have.

**Q5. Explain the three types of anomalies in a database with examples.**

**A:** Update anomaly: a fact stored redundantly in multiple rows — updating one row but missing others causes inconsistency (e.g., changing an employee's address in only one of ten duplicate rows). Insertion anomaly: cannot insert certain data without providing unrelated data (e.g., cannot record a new course unless at least one student is enrolled). Deletion anomaly: deleting a row inadvertently loses other important data (e.g., deleting the last student in a course loses the course's information too).

**Q6. What is a transitive dependency? Give an example and explain how 3NF resolves it.**

**A:** A transitive dependency exists when a non-key attribute depends on another non-key attribute: `A → B → C` where C transitively depends on A. Example: `EMP_ID → ZIP_CODE → CITY` — CITY depends on ZIP_CODE, which depends on EMP_ID. 3NF removes this by creating a separate table `ZIP_TABLE(ZIP_CODE, CITY)` and keeping only `EMPLOYEE(EMP_ID, ..., ZIP_CODE)`.

**Q7. Explain 4NF with an example of a multivalued dependency.**

**A:** A multivalued dependency `A →→ B` means for each value of A, there are multiple values of B, independent of other attributes. Example: STUDENT(ID, Course, Hobby) — a student with ID 21 has courses {Math, CS} and hobbies {Dancing, Singing} — all combinations appear as rows, creating redundancy. 4NF requires decomposing this into STUDENT_COURSE(ID, Course) and STUDENT_HOBBY(ID, Hobby).

---

## Unit 08: Transaction Management

### Summary

Defines the transaction concept and its role as the fundamental unit of work in a database. Covers the ACID properties in detail, transaction states (active, partially committed, committed, failed, aborted), concurrency issues, serializability (conflict and view), and recoverability of schedules.

### Key Definitions and Concepts

- **Transaction**: A sequence of database operations that constitutes a logical unit of work. Either all operations complete successfully (commit) or none take effect (rollback).
- **ACID Properties**:
  - **Atomicity**: All-or-nothing. Either the entire transaction completes or none of it is applied. Ensured by the recovery system (undo).
  - **Consistency**: A transaction takes the database from one valid state to another. Business rules and integrity constraints are maintained.
  - **Isolation**: Concurrent transactions appear to execute serially — intermediate states of a transaction are not visible to other transactions. Ensured by the concurrency control system.
  - **Durability**: Once a transaction is committed, its effects persist even if the system crashes. Ensured by the recovery system (redo, logging).
- **Transaction States**:
  - **Active**: Transaction is executing.
  - **Partially Committed**: Last statement has executed; data not yet written to disk.
  - **Committed**: Transaction completed successfully; changes are permanent.
  - **Failed**: Normal execution cannot proceed; error detected.
  - **Aborted**: Transaction rolled back; database restored to pre-transaction state.
- **Schedule**: A sequence of operations from multiple transactions.
- **Serial Schedule**: Transactions execute one after another without interleaving — always correct but not efficient.
- **Concurrent (Interleaved) Schedule**: Operations from different transactions are interleaved — better performance but may cause concurrency problems.
- **Serializable Schedule**: A concurrent schedule equivalent to some serial schedule — guarantees correctness.
  - **Conflict Serializability**: Check via precedence graph (no cycle = conflict serializable).
  - **View Serializability**: Broader than conflict serializability.
- **Conflict Operations**: Two operations conflict if they are from different transactions, on the same data item, and at least one is a write.
- **Recoverability**:
  - **Recoverable Schedule**: If transaction T2 reads data written by T1, then T1 must commit before T2 commits.
  - **Cascadeless Schedule**: Transactions only read committed data — prevents cascading rollbacks.
  - **Strict Schedule**: Transactions cannot read or overwrite uncommitted data written by another transaction.

### Likely Exam Questions

**Q1. Define a transaction. Explain the ACID properties.**

**A:** A transaction is a logical unit of work comprising a sequence of database operations. ACID properties: Atomicity — all operations succeed or none are applied; Consistency — transaction takes the DB from one valid state to another, preserving integrity constraints; Isolation — concurrent transactions appear to execute independently without seeing each other's intermediate states; Durability — committed changes survive system failure.

**Q2. Explain the transaction states with a state diagram description.**

**A:** A transaction begins in the Active state (executing). When the last statement executes, it moves to Partially Committed. If validation passes, it moves to Committed (permanent). If an error is detected in Active or Partially Committed, it moves to Failed. From Failed, the system rolls it back and it enters the Aborted state. From Aborted, the transaction may be restarted (new Active) or terminated.

**Q3. What is serializability? Distinguish between conflict and view serializability.**

**A:** Serializability ensures that a concurrent schedule produces the same result as some serial schedule. Conflict serializability checks if a schedule can be transformed into a serial schedule by swapping non-conflicting operations — verified via a precedence graph (if it has no cycle, the schedule is conflict serializable). View serializability is broader and covers schedules not conflict-serializable but still equivalent to some serial schedule.

**Q4. What is a recoverable schedule? What is a cascadeless schedule?**

**A:** A recoverable schedule ensures that if T2 reads data modified by T1, T2 commits only after T1 commits — prevents reading data from an eventually rolled-back transaction. A cascadeless schedule is stricter: T2 can only read data written by T1 after T1 has committed — eliminates the need for cascading rollbacks (where rolling back T1 forces rollback of T2, T3, etc.).

**Q5. Explain isolation and how it is maintained in a DBMS.**

**A:** Isolation ensures that concurrent transactions do not interfere with each other — each transaction sees the database as if it were running alone. It is maintained by the concurrency control subsystem using protocols such as locking (2PL) or timestamp ordering. Without isolation, problems such as dirty reads, non-repeatable reads, and phantom reads can occur.

**Q6. What is a conflict in a schedule? Define conflict equivalent and conflict serializable schedules.**

**A:** Two operations conflict if they are from different transactions, access the same data item, and at least one is a write. Two schedules are conflict equivalent if they can be transformed into each other by swapping non-conflicting adjacent operations. A schedule is conflict serializable if it is conflict equivalent to some serial schedule.

**Q7. Why is concurrent execution of transactions preferred? What problems can it cause?**

**A:** Concurrent execution improves throughput (CPU and I/O overlap), reduces average response time (short transactions need not wait behind long ones), and makes better use of system resources. Problems it can cause: dirty read (reading uncommitted data), non-repeatable read (same query returns different results within a transaction), lost update (two transactions overwrite each other), and phantom read (new rows appear within a transaction's range query).

---

## Unit 09: Concurrency Control

### Summary

Covers the protocols used by DBMS to manage simultaneous transaction execution. Topics include lock-based protocols (shared and exclusive locks), Two-Phase Locking (2PL) with its variants, timestamp-based protocols, validation-based (optimistic) concurrency control, and deadlock — its detection, prevention, avoidance, and recovery.

### Key Definitions and Concepts

- **Concurrency Control**: Manages simultaneous operations to prevent conflicts and ensure serializability.
- **Problems of Concurrency**: Lost update, dirty read (uncommitted dependency), non-repeatable read, incorrect summary.
- **Lock Types**:
  - **Shared Lock (S)**: Read-only lock; multiple transactions can hold S-locks simultaneously on the same item.
  - **Exclusive Lock (X)**: Read-write lock; only one transaction can hold an X-lock; prevents all other locks.
- **Lock Compatibility**: S-S compatible; S-X and X-X incompatible.
- **Two-Phase Locking (2PL)**: Transactions lock items in two phases:
  - **Growing Phase**: Acquires locks; cannot release any locks.
  - **Shrinking Phase**: Releases locks; cannot acquire any new locks.
  - Guarantees conflict serializability. Does NOT prevent deadlock.
  - **Strict 2PL**: Holds all exclusive locks until transaction commits — prevents cascading rollbacks.
  - **Rigorous 2PL**: Holds all locks (S and X) until commit.
- **Timestamp-Based Protocol**: Each transaction is assigned a timestamp when it begins. Schedule equivalent to serial order of timestamps.
  - `TS(T)` — timestamp of transaction T.
  - `W_TS(X)` — largest timestamp of any transaction that successfully wrote X.
  - `R_TS(X)` — largest timestamp of any transaction that successfully read X.
  - If `R_TS(X) > TS(T)` or `W_TS(X) > TS(T)` during a write → abort and restart T.
  - Ensures deadlock-free execution. May cause cascading rollbacks.
- **Validation-Based Protocol (Optimistic Concurrency Control)**: Three phases:
  - **Read Phase**: Reads and writes to local copies only.
  - **Validation Phase**: Checks if local changes can be applied without violating serializability.
  - **Write Phase**: If validation passes, applies changes to database; else rolls back.
- **Deadlock**: Situation where two or more transactions wait indefinitely for each other to release locks.
  - **Coffman Conditions** (all four must hold for deadlock): Mutual Exclusion, Hold and Wait, No Preemption, Circular Wait.
  - **Detection**: Maintain a wait-for graph; deadlock exists if there is a cycle.
  - **Prevention**: Use Wait-Die or Wound-Wait timestamp schemes.
    - **Wait-Die**: Older waits; younger dies (restarts).
    - **Wound-Wait**: Older wounds (forces rollback of) younger; younger waits.
  - **Recovery**: Select a victim transaction, rollback it to break the deadlock.
  - **Starvation**: Same transaction repeatedly chosen as victim — prevented by including rollback count in cost.

### Likely Exam Questions

**Q1. Explain the Two-Phase Locking protocol. Does it guarantee deadlock-freedom?**

**A:** 2PL divides transaction execution into growing and shrinking phases. During the growing phase, a transaction may acquire locks but not release any. During the shrinking phase, it may release locks but not acquire new ones. This ensures conflict serializability. However, 2PL does NOT prevent deadlocks — two transactions can each hold a lock the other needs, causing a circular wait.

**Q2. Distinguish between shared lock and exclusive lock. What is lock compatibility?**

**A:** A shared (S) lock allows a transaction to read a data item; multiple transactions can simultaneously hold S-locks on the same item. An exclusive (X) lock allows reading and writing; only one transaction at a time can hold an X-lock, and no other lock is compatible. Compatibility: S-S compatible; S-X incompatible; X-X incompatible.

**Q3. Explain the timestamp-based protocol. What are W_TS(X) and R_TS(X)?**

**A:** Each transaction is assigned a unique timestamp when it enters the system. The protocol enforces timestamp order: `W_TS(X)` is the timestamp of the last transaction that successfully wrote X; `R_TS(X)` is the timestamp of the last transaction that successfully read X. If a transaction T tries to write X and `R_TS(X) > TS(T)`, abort T. This ensures a deadlock-free but potentially cascading schedule.

**Q4. What is a deadlock? Explain the Coffman conditions.**

**A:** A deadlock is a situation where a set of transactions each wait for a resource held by another in the set, forming a circular dependency — no transaction can proceed. The four Coffman conditions that must all hold simultaneously: (1) Mutual Exclusion — resources cannot be shared; (2) Hold and Wait — a process holds resources while requesting more; (3) No Preemption — resources cannot be forcibly taken; (4) Circular Wait — chain of processes each waiting for the next.

**Q5. Explain Wait-Die and Wound-Wait deadlock prevention schemes.**

**A:** Both use timestamps to impose a total order. In Wait-Die: if older T_i requests a lock held by younger T_j, T_i waits; if younger T_i requests a lock held by older T_j, T_i dies (rolls back). In Wound-Wait: if older T_i requests a lock held by younger T_j, T_i wounds T_j (forces it to rollback); if younger T_i requests a lock held by older T_j, T_i waits. Both ensure no circular waits.

**Q6. Explain the validation-based (optimistic) concurrency control protocol.**

**A:** The validation-based protocol assumes conflicts are rare and allows transactions to execute freely in three phases. Read Phase: all reads and writes go to local copies. Validation Phase: the DBMS checks if the transaction's local changes violate serializability (checks for conflicting writes from concurrently committed transactions). Write Phase: if validation succeeds, local changes are written to the database; else the transaction rolls back and restarts.

**Q7. What is starvation in the context of concurrency control? How is it avoided?**

**A:** Starvation occurs when a transaction waits indefinitely for a lock, often because other transactions keep being given priority. It can also occur if the same transaction is repeatedly selected as a victim during deadlock recovery. Prevention: use a fair queuing mechanism (first-come-first-served for locks); include the number of times a transaction has been rolled back in the cost factor when selecting deadlock victims, so a frequently victimized transaction gets lower cost and is avoided.

---

## Unit 10: SQL DCL/TCL

### Summary

Focuses on Data Control Language (GRANT and REVOKE) for managing database security, and Transaction Control Language (COMMIT, ROLLBACK, SAVEPOINT). Covers aggregate functions in more depth with SQL syntax, numeric and character functions, and the ORDER BY and GROUP BY clauses.

### Key Definitions and Concepts

- **DCL (Data Control Language)**: Controls user access and permissions.
  - `GRANT`: Gives privileges to a user on a database object.
  - `REVOKE`: Withdraws previously granted privileges.
- **Object Privileges**: SELECT, INSERT, UPDATE, DELETE, ALTER, INDEX.
- **WITH GRANT OPTION**: Allows the grantee to further grant the same privilege to others.
- **TCL (Transaction Control Language)**:
  - `COMMIT`: Permanently saves all changes since the last COMMIT/ROLLBACK.
  - `ROLLBACK`: Undoes all changes since the last COMMIT/ROLLBACK.
  - `SAVEPOINT name`: Marks a point in a transaction; allows partial rollback.
  - `SET TRANSACTION`: Specifies transaction characteristics (isolation level, read/write mode).
- **Aggregate Functions** (SQL syntax):
  - `COUNT(*)`, `COUNT(col)`, `COUNT(DISTINCT col)`
  - `SUM([ALL|DISTINCT] col)`
  - `AVG([ALL|DISTINCT] col)`
  - `MAX([ALL|DISTINCT] col)`
  - `MIN([ALL|DISTINCT] col)`
- **Numeric Functions**: ABS(), CEILING(), COS(), SIN(), TAN(), ACOS(), ASIN(), ATAN().
- **Character Functions**:
  - Case-Manipulative: `LOWER(str)`, `UPPER(str)`, `INITCAP(str)` (first letter of each word capitalized).
  - Character-Manipulative: `CONCAT(s1, s2)`, `LENGTH(str)`, `SUBSTR(str, start, length)`, `INSTR`, `LPAD`, `RPAD`, `TRIM`, `REPLACE`.
- **ORDER BY clause**: Sorts the result set. `ASC` (default) or `DESC`.
- **GROUP BY clause**: Groups rows with the same value in specified columns; used with aggregate functions.
- **HAVING clause**: Filters groups (like WHERE but for aggregated results).

### Key SQL Syntax Snippets

```sql
-- GRANT
GRANT SELECT, UPDATE ON employee TO user_abc;
GRANT ALL ON employee TO user_abc WITH GRANT OPTION;

-- REVOKE
REVOKE UPDATE ON employee FROM user_abc;

-- ORDER BY / GROUP BY
SELECT dept, COUNT(*) AS num_employees
FROM Employee
GROUP BY dept
HAVING COUNT(*) > 5
ORDER BY num_employees DESC;

-- Character functions
SELECT UPPER('hello');          -- HELLO
SELECT LOWER('HELLO');          -- hello
SELECT INITCAP('hello world');  -- Hello World
SELECT CONCAT('Data', 'base'); -- Database
SELECT LENGTH('Database');     -- 8
SELECT SUBSTR('Database', 5, 4); -- base
```

### Likely Exam Questions

**Q1. What is DCL? Explain GRANT and REVOKE with syntax.**

**A:** DCL (Data Control Language) controls database security by managing user access privileges. GRANT gives a user permission: `GRANT privilege_list ON object TO user [WITH GRANT OPTION];`. REVOKE removes previously granted permissions: `REVOKE privilege_list ON object FROM user;`. Example: `GRANT SELECT, INSERT ON Orders TO john;` gives john the right to read and insert rows in Orders.

**Q2. What is the difference between WHERE and HAVING?**

**A:** WHERE filters individual rows before grouping — it cannot use aggregate functions. HAVING filters groups after GROUP BY — it is used with aggregate functions. Example: `SELECT dept, COUNT(*) FROM emp GROUP BY dept HAVING COUNT(*) > 3` returns only departments with more than 3 employees (HAVING). `WHERE salary > 50000` would filter individual employees before grouping.

**Q3. Explain SAVEPOINT. How is it different from COMMIT?**

**A:** SAVEPOINT marks an intermediate point in a transaction to which a partial rollback can be performed: `SAVEPOINT sp1;` ... `ROLLBACK TO SAVEPOINT sp1;` undoes changes after the savepoint but keeps earlier changes. COMMIT permanently saves all changes since the last COMMIT or ROLLBACK and ends the transaction — no further rollback is possible.

**Q4. Explain the GROUP BY clause with an example.**

**A:** GROUP BY groups rows sharing the same values in specified columns so aggregate functions can be applied per group. Example: `SELECT dept_id, AVG(salary) FROM Employee GROUP BY dept_id;` returns the average salary for each department. Every column in the SELECT list that is not an aggregate function must appear in the GROUP BY clause.

**Q5. Explain INITCAP, UPPER, and LOWER character functions.**

**A:** UPPER converts all characters to uppercase (`UPPER('hello')` → `HELLO`). LOWER converts all characters to lowercase (`LOWER('HELLO')` → `hello`). INITCAP capitalizes the first letter of each word and lowercases the rest (`INITCAP('hello world')` → `Hello World`).

**Q6. What is SUBSTR? Give an example.**

**A:** SUBSTR extracts a portion of a string. Syntax: `SUBSTR(string, start_position, length)`. If length is omitted, returns from start_position to the end. Example: `SUBSTR('Database Management', 9, 10)` returns `Management`. Positions start at 1.

**Q7. Write SQL to find total salary and number of employees per department, showing only departments with more than 3 employees, ordered by total salary descending.**

**A:**
```sql
SELECT dept_id, COUNT(*) AS num_emp, SUM(salary) AS total_salary
FROM Employee
GROUP BY dept_id
HAVING COUNT(*) > 3
ORDER BY total_salary DESC;
```

---

## Unit 11: Recovery Systems

### Summary

Covers how DBMS ensures durability and atomicity after failures. Topics include failure classification, log-based recovery, steal/force policies, the ARIES algorithm, checkpointing, shadow paging, buffer management, and recovery from non-volatile storage loss.

### Key Definitions and Concepts

- **Failure Types**:
  - **Transaction Failure**: Logical error (division by zero, constraint violation) or system error (deadlock).
  - **System Crash**: Hardware or software failure causing main memory loss; non-volatile (disk) storage survives.
  - **Disk Failure**: Loss of non-volatile storage due to head crash, corruption.
- **Recovery Goals**: Atomicity (undo uncommitted transactions) and Durability (redo committed transactions after crash).
- **Log (Write-Ahead Log / WAL)**: Stable, sequential record of all database modifications.
  - Each log record contains: `[Transaction ID, Data Item, Old Value, New Value]`.
  - **Write-Ahead Logging Rule**: Log record must be written to stable storage before the modified data page is written to disk.
- **Log-Based Recovery**:
  - **Undo**: Rolls back uncommitted transactions — uses old values from log.
  - **Redo**: Re-applies committed transactions not yet on disk — uses new values from log.
- **Buffer Management Policies**:
  - **Steal**: Dirty (uncommitted) pages can be written to disk before commit — requires undo on crash.
  - **No-Steal**: Dirty pages are not written until commit — undo not needed, but needs large buffer.
  - **Force**: All modified pages are written to disk at commit — redo not needed.
  - **No-Force**: Modified pages need not be written at commit — redo is required.
  - Most DBMS use **Steal + No-Force** (most flexible, needs both undo and redo).
- **Checkpointing**: Periodically writes all dirty pages and a checkpoint record to log. On recovery, DBMS only needs to process the log from the last checkpoint — limits recovery time.
- **ARIES Algorithm** (Algorithm for Recovery and Isolation Exploiting Semantics): Uses steal + no-force. Three phases:
  1. **Analysis Phase**: Scans log from last checkpoint to identify active transactions and dirty pages at crash time.
  2. **Redo Phase**: Replays all logged actions from the earliest dirty page forward to restore DB to crash state.
  3. **Undo Phase**: Rolls back all uncommitted transactions using the log in reverse order.
- **Shadow Paging**: Alternative to logging — maintain a shadow (old) copy of each database page; on commit, update the page table to point to new pages.
- **RAID**: Redundant Array of Independent Disks — provides disk failure recovery through mirroring or parity.

### Likely Exam Questions

**Q1. Explain the ARIES recovery algorithm and its three phases.**

**A:** ARIES is a widely-used recovery algorithm using steal + no-force buffer management. Three phases: (1) Analysis — scans log forward from the last checkpoint to reconstruct which transactions were active at crash and which pages were dirty; (2) Redo — replays all operations from the earliest dirty page LSN forward, restoring the database to the exact crash state; (3) Undo — scans log backward to roll back all transactions that were active at the time of the crash (uncommitted).

**Q2. What is Write-Ahead Logging (WAL)? Why is it important?**

**A:** WAL is a rule stating that a log record for a database modification must be written to stable (non-volatile) storage before the corresponding data page is written to disk. This guarantees that even if the system crashes after writing data to disk, the log exists to either undo (if the transaction didn't commit) or redo (if it committed but data wasn't all flushed) the operations. It is the foundation of log-based recovery.

**Q3. Explain steal and force buffer management policies and their implications for recovery.**

**A:** Steal means dirty (uncommitted) pages can be evicted to disk before the transaction commits — requires UNDO capability in the recovery system. No-steal means dirty pages are kept in memory until commit — no undo needed but requires a very large buffer. Force means all dirty pages are written to disk at commit time — no redo needed. No-force means pages need not be written at commit — redo is required. Most DBMS use Steal+No-Force because it gives most flexibility, at the cost of needing both undo and redo.

**Q4. What is checkpointing? Why is it used in recovery?**

**A:** Checkpointing is a periodic operation where the DBMS writes all dirty (modified) pages in the buffer to disk and records a checkpoint log record containing the list of active transactions. On recovery after a crash, the system only needs to process the log from the last checkpoint rather than from the very beginning, drastically reducing recovery time.

**Q5. Classify the types of database failures.**

**A:** (1) Transaction failure — a transaction cannot complete normally due to a logical error (bad input, constraint violation) or system error (deadlock). (2) System crash — hardware/software failure causing loss of volatile (main memory) data; disk contents survive. (3) Disk failure — a media crash that destroys non-volatile storage; requires backup restoration. Each type requires a different recovery strategy.

**Q6. What is shadow paging? How does it differ from log-based recovery?**

**A:** Shadow paging maintains two page tables: a current page table and a shadow page table. Modified pages are written to new disk locations; the shadow table points to old pages. On commit, the current page table replaces the shadow. On abort, the shadow table is restored. Differences from log-based: shadow paging requires no log records but causes disk fragmentation and makes concurrent access harder; log-based recovery is more efficient for concurrent workloads.

**Q7. Explain the terms UNDO and REDO in the context of database recovery.**

**A:** UNDO reverses the effects of a transaction that did not commit before a crash — it uses the old values stored in the log to restore the database to its pre-transaction state. REDO re-applies the operations of a committed transaction whose changes had not yet been written to disk at the time of crash — it uses the new values stored in the log to bring the database up to the committed state.

---

## Unit 12: Distributed Databases

### Summary

Covers distributed database management systems (DDBMS): definition, advantages/disadvantages, types (homogeneous/heterogeneous), architectures, design alternatives (replication and fragmentation), distribution transparency, database control (authentication, access rights), and query optimization challenges.

### Key Definitions and Concepts

- **Distributed Database**: A collection of logically interrelated databases physically spread across multiple sites connected by a network, appearing as a single database to users.
- **DDBMS**: Software that manages a distributed database transparently.
- **Features of DDBMS**: Data physically at multiple sites, sites connected by network, supports transaction processing, maintains data integrity across sites.
- **Factors Encouraging DDBMS**: Organizational distribution, need for data sharing, OLTP/OLAP support, improved disaster recovery through replication.
- **Advantages**: Modular development, higher reliability (partial failures don't stop system), better response time (local data), lower communication costs.
- **Disadvantages**: Complex and expensive software, processing overhead, data integrity challenges, improper distribution can hurt performance.
- **Types of Distributed Databases**:
  - **Homogeneous**: All sites use identical DBMS and OS; single logical database; sites cooperate.
    - Autonomous (independent DBMSs linked) vs. Non-autonomous (central DBMS controls).
  - **Heterogeneous**: Sites use different DBMS, OS, or data models; complex query and transaction processing.
    - Federated (loosely integrated) vs. Un-federated (central coordination module).
- **DDBMS Architectures**: Client-Server (single or multiple servers), Peer-to-Peer, Multi-DBMS.
- **Design Alternatives**:
  - **Non-replicated, Non-fragmented**: Different tables at different sites.
  - **Fully Replicated**: All tables at all sites — fast reads, expensive writes.
  - **Partially Replicated**: Copies placed based on access frequency.
  - **Fragmented**: Tables split into fragments stored at different sites.
  - **Mixed**: Combination of fragmentation and partial replication.
- **Data Replication**: Storing copies of data at multiple sites for availability and faster local access.
  - Advantages: Reliability, reduced network load, quicker response, simpler transactions.
  - Disadvantages: Increased storage, complex and costly updates, consistency challenges.
- **Fragmentation**: Dividing a table into smaller pieces (fragments) stored at different sites.
  - **Horizontal Fragmentation**: Groups of tuples (rows) stored at different sites based on a predicate. `WHERE course = 'CS'`
  - **Vertical Fragmentation**: Groups of columns stored at different sites; primary key must appear in each fragment.
  - **Hybrid Fragmentation**: Combination of horizontal and vertical.
  - Rule of reconstructiveness: original table can always be reconstructed from fragments.
- **Distribution Transparency**: Internal details of distribution are hidden from users.
  - **Location Transparency**: User can query any table without knowing where it is stored.
  - **Fragmentation Transparency**: User queries the table as if it were unfragmented.
  - **Replication Transparency**: User is unaware that multiple copies exist.
- **Database Control**: Authentication (username/password, biometrics), Access Rights (privileges on tables), Integrity Constraints.
- **Semi-join**: Technique to reduce data transfer during distributed joins — project join columns to the remote site first.

### Likely Exam Questions

**Q1. Define a distributed database. What are its key features?**

**A:** A distributed database is a collection of logically interrelated databases physically spread across multiple geographic sites, connected by a network, and appearing as a single database to users. Key features: data physically stored at multiple sites; each site managed by its own DBMS independently; sites are networked but not in a shared-memory configuration; supports transparent transaction processing; not simply a loosely connected file system.

**Q2. What are the advantages and disadvantages of a DDBMS?**

**A:** Advantages: modular expansion (add sites without disruption), higher reliability (site failure does not stop the system), faster response (local access to nearby data), lower communication cost. Disadvantages: complex and expensive software, significant processing overhead for maintaining consistency, data integrity is harder to guarantee across sites, improper data placement can severely hurt performance.

**Q3. Distinguish between homogeneous and heterogeneous distributed databases.**

**A:** A homogeneous distributed database uses identical DBMS and OS at all sites, making the system appear as one unified database with all sites cooperating. A heterogeneous distributed database has different DBMS products, OS, or data models at different sites — query and transaction processing is complex because schemas and interfaces differ. Heterogeneous systems can be federated (integrated independently) or unfederated (with a central coordinator).

**Q4. Explain horizontal, vertical, and hybrid fragmentation.**

**A:** Horizontal fragmentation divides a table into row subsets based on a condition (e.g., `WHERE course = 'CS'`); each fragment has all columns but a subset of rows. Vertical fragmentation divides a table into column subsets; each fragment must include the primary key for reconstructibility. Hybrid fragmentation combines both — first fragment horizontally, then vertically (or vice versa). All fragments must satisfy reconstructiveness so the original table can be rebuilt.

**Q5. What is distribution transparency? Name and explain its three dimensions.**

**A:** Distribution transparency hides the physical distribution details from users. Three dimensions: (1) Location transparency — users query tables without knowing which site holds the data; (2) Fragmentation transparency — users query a table as if it is not fragmented, without knowing about its fragments; (3) Replication transparency — users are unaware that multiple copies of the data exist at different sites; the system handles consistency.

**Q6. What is data replication? List its advantages and disadvantages.**

**A:** Data replication is the process of storing copies of database data at multiple sites. Advantages: high availability if a site fails, faster local query response, reduced network traffic. Disadvantages: increased storage cost (multiples of original), update complexity (all copies must be synchronized), potential for temporary inconsistency if updates are delayed.

**Q7. What is a semi-join in distributed query processing?**

**A:** A semi-join is an optimization technique for joining tables stored at different sites. Instead of sending entire tables over the network, only the join column(s) are projected and sent to the remote site where they are joined with the second relation. The result is then used to retrieve only the relevant tuples from the remote table. This significantly reduces network data transfer compared to a full join.

---

## Unit 13: Cloud Databases

### Summary

Introduces cloud computing concepts: definition, history, deployment models (public, private, community, hybrid), service models (IaaS, PaaS, SaaS), cloud characteristics, risks, storage, and a comparison between cloud computing and distributed computing.

### Key Definitions and Concepts

- **Cloud**: A network/Internet resource accessible remotely; provides on-demand services.
- **Cloud Computing**: Remotely accessing and managing hardware and software resources via the Internet.
- **Deployment Models**:
  - **Public Cloud**: Services available to the general public (less secure due to openness).
  - **Private Cloud**: Services restricted to a single organization (more secure).
  - **Community Cloud**: Shared by a group of organizations with common interests.
  - **Hybrid Cloud**: Combination of public and private; critical activities on private, non-critical on public.
- **Service Models**:
  - **IaaS (Infrastructure-as-a-Service)**: Provides raw infrastructure — physical/virtual machines, storage. Most basic level. Example: Amazon EC2.
  - **PaaS (Platform-as-a-Service)**: Provides runtime environment, development tools, deployment frameworks. Example: Google App Engine.
  - **SaaS (Software-as-a-Service)**: Provides software applications as a service over the Internet. Example: Gmail, Salesforce, Microsoft Office 365.
  - **XaaS (Anything-as-a-Service)**: Umbrella for other "as-a-service" models (DBaaS, NaaS, etc.).
- **Key Characteristics of Cloud Computing**:
  1. **On-Demand Self-Service**: Resources available any time without provider interaction.
  2. **Broad Network Access**: Accessible via Internet from any device.
  3. **Resource Pooling**: Multiple tenants share a pool of physical resources (multi-tenancy).
  4. **Rapid Elasticity**: Resources can be scaled up or down dynamically.
  5. **Measured Service**: Usage is monitored and billed based on consumption.
- **Risks of Cloud Computing**: Security and privacy (data at third-party), Vendor lock-in, Isolation failure, Management interface compromise, Insecure/incomplete data deletion.
- **SaaS Characteristics**: Software delivered over Internet; maintained by vendor; subscription-based licensing; no client-side installation; automatically updated; multi-tenant.
- **SaaS Benefits**: Modest tools, efficient licensing, centralized management, platform managed by provider, multi-tenant solutions.
- **Cloud vs. Distributed Computing**:
  - Cloud delivers IT services (storage, software) on demand over the Internet on a pay-per-use basis.
  - Distributed computing solves a problem by coordinating multiple autonomous computers — focus is on computation, not service delivery.
- **Cloud Storage**: Block storage (raw storage, user creates volumes) vs. File storage (NAS-style, pre-formatted file system). Managed vs. Unmanaged.
- **SOA**: Service-Oriented Architecture — architectural style underlying cloud services.

### Likely Exam Questions

**Q1. What is cloud computing? What are its four key characteristics?**

**A:** Cloud computing refers to delivering computing resources (servers, storage, databases, software) over the Internet on demand. Four key characteristics: (1) On-demand self-service — resources available any time without human interaction with the provider; (2) Broad network access — accessible from any device over any network; (3) Resource pooling — physical resources shared among multiple tenants; (4) Rapid elasticity — resources scale up or down automatically based on demand; (5) Measured service — usage monitored and billed accordingly.

**Q2. Explain the three cloud service models: IaaS, PaaS, and SaaS.**

**A:** IaaS (Infrastructure-as-a-Service) provides fundamental computing infrastructure — virtual machines, storage, networking — over the Internet; customer manages OS and above (e.g., AWS EC2). PaaS (Platform-as-a-Service) provides a managed platform with runtime environment and development tools; customer manages only the application code (e.g., Google App Engine). SaaS (Software-as-a-Service) delivers complete software applications over the Internet; customer only uses the software (e.g., Gmail, Salesforce).

**Q3. What are the four cloud deployment models?**

**A:** Public Cloud: services open to the general public via the Internet; cost-effective but less secure. Private Cloud: cloud resources dedicated to one organization; more secure and controllable. Community Cloud: shared infrastructure for organizations with common requirements (e.g., government agencies). Hybrid Cloud: combination of public and private clouds; critical workloads on private, non-sensitive on public.

**Q4. What are the main risks of cloud computing?**

**A:** Security and privacy — data held by a third party raises concerns about breaches and compliance. Vendor lock-in — difficult to switch providers due to proprietary formats or APIs. Isolation failure — failure of multi-tenant isolation mechanisms may expose one tenant's data to another. Management interface compromise — internet-accessible management consoles are attack vectors. Incomplete data deletion — data may persist on shared hardware even after requested deletion.

**Q5. Differentiate between cloud computing and distributed computing.**

**A:** Cloud computing delivers IT services (storage, software, compute) on demand over the Internet on a pay-per-use model, focusing on service delivery. Distributed computing coordinates multiple autonomous computers to collaboratively solve a single computational problem, focusing on computation speed and parallelism. Cloud computing is a service-delivery paradigm; distributed computing is a computing technique. Cloud uses distributed computing internally but is a broader business and delivery concept.

**Q6. What are the characteristics of the SaaS model?**

**A:** SaaS delivers software over the Internet without installation on client machines. Characteristics: software maintained by vendor; licensing is subscription or usage-based; automatically updated; accessible from any browser/device; multi-tenant (multiple users share one instance); centrally managed data; cost-effective (no hardware/software maintenance by end user).

**Q7. What is meant by rapid elasticity in cloud computing?**

**A:** Rapid elasticity is the ability to scale computing resources (CPU, memory, storage, bandwidth) up or down quickly and automatically in response to changing workload demands. A business can provision more servers during peak traffic and release them when traffic drops. From the user's perspective, the capacity appears virtually unlimited and always available on demand.

---

## Unit 14: PL/SQL

### Summary

Introduces PL/SQL, Oracle's procedural extension to SQL. Covers the block structure (DECLARE, BEGIN, EXCEPTION, END), identifiers, data types, comments, and triggers — stored programs that automatically execute in response to database events (DML, DDL, or database operations).

### Key Definitions and Concepts

- **PL/SQL** (Procedural Language/Structured Query Language): Oracle's procedural extension to SQL, developed in the late 1980s. Block-structured; closely integrated with SQL.
- **Features of PL/SQL**: Tightly integrated with SQL, extensive error checking, numerous data types, structured programming (functions/procedures), OOP support, web application support, portable.
- **Advantages**: Reduced network traffic (send entire block at once), high performance, high productivity, exception handling, encapsulation, portability, security.
- **PL/SQL Block Structure**:
  ```
  DECLARE      -- optional: variables, constants, cursors
    <declarations>
  BEGIN        -- mandatory: executable statements
    <executable commands>
  EXCEPTION    -- optional: error handlers
    <exception handling>
  END;         -- mandatory
  /
  ```
- **Block Types**:
  - **Anonymous block**: Unnamed block executed once.
  - **Named block / Subprogram**: Procedures, Functions (stored in the database).
- **PL/SQL Identifiers**: Constants, variables, exceptions, procedures, cursors, reserved words. Not case-sensitive. Max 30 characters. Cannot use reserved keywords.
- **Key Delimiters**: `:=` (assignment), `||` (concatenation), `**` (exponentiation), `--` (single-line comment), `/* ... */` (multi-line comment).
- **PL/SQL Data Types (Character)**:
  - `CHAR(n)`: Fixed-length string, max 32,767 bytes.
  - `VARCHAR2(n)`: Variable-length string, max 32,767 bytes.
  - `NCHAR`, `NVARCHAR2`: National character sets.
  - `LONG`, `LONG RAW`, `RAW`: Longer binary or character strings.
  - `ROWID`, `UROWID`: Row address identifiers.
- **Triggers**: Stored programs that automatically execute (fire) in response to specific events on a table, view, schema, or database.
  - **Event Types**: DML events (INSERT, UPDATE, DELETE), DDL events (CREATE, ALTER, DROP), Database events (LOGON, LOGOFF, STARTUP, SHUTDOWN, SERVERERROR).
  - **Timing**: `BEFORE` (fires before the DML), `AFTER` (fires after), `INSTEAD OF` (for views).
  - **Level**: Row-level (`FOR EACH ROW`) — fires once per affected row; Statement-level — fires once per SQL statement.
  - **OLD and NEW references**: In row-level triggers, `:OLD.column` accesses the pre-update value; `:NEW.column` accesses the post-update value (`:OLD` only relevant for UPDATE/DELETE, `:NEW` for INSERT/UPDATE).
- **Benefits of Triggers**: Auto-generate derived values, enforce referential integrity, audit logging, event-based synchronization, security authorization, prevent invalid transactions.

### Key PL/SQL Syntax Snippets

```sql
-- Hello World anonymous block
DECLARE
  message VARCHAR2(20) := 'Hello, World!';
BEGIN
  dbms_output.put_line(message);
END;
/

-- Trigger creation
CREATE OR REPLACE TRIGGER display_salary_changes
BEFORE DELETE OR INSERT OR UPDATE ON customers
FOR EACH ROW
WHEN (NEW.ID > 0)
DECLARE
  sal_diff NUMBER;
BEGIN
  sal_diff := :NEW.salary - :OLD.salary;
  dbms_output.put_line('Old salary: ' || :OLD.salary);
  dbms_output.put_line('New salary: ' || :NEW.salary);
  dbms_output.put_line('Difference: ' || sal_diff);
END;
/
```

### Likely Exam Questions

**Q1. What is PL/SQL? How is it different from SQL?**

**A:** PL/SQL is Oracle's procedural extension to SQL, developed in the late 1980s. While SQL is a declarative, non-procedural query language for data retrieval and manipulation, PL/SQL adds procedural constructs: variables, constants, control structures (IF/LOOP), exception handling, procedures, functions, and triggers. PL/SQL sends entire blocks to the database at once (reduced network traffic), supports modular programming, and is tightly integrated with SQL statements within the same block.

**Q2. Describe the structure of a PL/SQL block. Which sections are mandatory?**

**A:** A PL/SQL block has four sections: DECLARE (optional) — declares variables, constants, cursors, and exceptions; BEGIN (mandatory) — contains the executable SQL and PL/SQL statements; EXCEPTION (optional) — handles runtime errors; END (mandatory) — marks the end of the block followed by a semicolon. Every statement ends with a semicolon. The DECLARE header identifies type and name for named blocks (procedures/functions).

**Q3. What is a trigger in PL/SQL? What events can fire a trigger?**

**A:** A trigger is a stored PL/SQL program that automatically executes (fires) in response to a specified event without being explicitly called by the user. Events that fire triggers: DML events on a table or view (INSERT, UPDATE, DELETE); DDL events (CREATE, ALTER, DROP); Database-level events (LOGON, LOGOFF, STARTUP, SHUTDOWN, SERVERERROR).

**Q4. Differentiate between BEFORE and AFTER triggers with an example use case.**

**A:** A BEFORE trigger fires before the triggering DML statement executes — useful for validating or modifying incoming data before it is written (e.g., setting a DEFAULT, checking a business rule before INSERT). An AFTER trigger fires after the statement executes — useful for auditing, logging, or updating other tables based on committed changes. INSTEAD OF triggers fire instead of the DML and are used on views that cannot be directly updated.

**Q5. Explain the OLD and NEW references in a row-level trigger.**

**A:** In a row-level trigger (defined with FOR EACH ROW), `:OLD.column_name` references the value of that column before the triggering operation, and `:NEW.column_name` references the value after. For INSERT, `:OLD` is NULL (no previous value). For DELETE, `:NEW` is NULL (no new value). For UPDATE, both `:OLD` and `:NEW` are meaningful. These pseudorecords allow the trigger to compare before-and-after values.

**Q6. What are the benefits of using triggers?**

**A:** Triggers automatically: generate derived column values (no application code needed); enforce referential and complex integrity rules beyond basic constraints; log all table access for auditing; synchronize related tables when one changes; enforce security by validating operations; prevent invalid transactions by raising exceptions before changes are committed.

**Q7. Write a PL/SQL anonymous block that declares a variable, assigns it a value, and prints it.**

**A:**
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
This block declares two variables, assigns values using `:=`, concatenates them with `||`, and prints using `dbms_output.put_line`.

---

*End of DATABASE MANAGEMENT SYSTEMS Prep Material*

*Covers Units 01–14 | Optimized for exam revision*
