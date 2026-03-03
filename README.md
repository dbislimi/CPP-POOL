# CPP-POOL

Ten C++ modules, zero modern shortcuts. Written entirely in C++98 — the best way to understand what C++11 actually gives you, and why it matters.

## Quick Start

```bash
cd cpp0X/exXX
make
```

## How it works

Each module builds strictly on the previous one. The constraint — C++98 throughout, no exceptions — means no lambdas, no `auto`, no smart pointers, no range-based loops. Everything that modern C++ gives for free has to be written explicitly. That's the point: understand the mechanism before using the abstraction.

## Modules

**cpp00** — Namespaces, classes, member functions, I/O streams, initialization lists, `static`, `const`. The basics, but done right.

**cpp01** — Memory allocation on the heap vs. the stack, pointers to members, references, file streams. When to use `new`, and when not to.

**cpp02** — Operator overloading, Orthodox Canonical Form (default constructor, copy constructor, assignment operator, destructor), fixed-point arithmetic. Every class that manages a resource must respect the OCF.

**cpp03** — Inheritance, constructor chaining, `protected` vs `private`, method overriding. The diamond problem makes an appearance.

**cpp04** — Polymorphism, virtual functions, pure virtual functions, abstract classes. The difference between a pointer to a base class and a pointer to a derived class.

**cpp05** — Exceptions, `try`/`catch`/`throw`, custom exception hierarchies. When to throw, what to throw, and how to propagate.

**cpp06** — The four C++ casts: `static_cast`, `dynamic_cast`, `reinterpret_cast`, `const_cast`. When each one is appropriate and when it's a red flag.

**cpp07** — Function templates, class templates, template specialization. Writing code that works for any type without sacrificing type safety.

**cpp08** — STL containers (`std::vector`, `std::list`, `std::map`, `std::stack`), iterators, algorithms. The standard library, used properly.

**cpp09** — STL under constraints: each container type used exactly once, in a context that justifies its choice. `std::stack` for RPN, `std::deque` for Ford-Johnson, `std::map` for Bitcoin exchange rates.
