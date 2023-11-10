# Academy-Course-DAT31071

**An Introduction to Tensor Operations with Eigen**

This course is a Open Risk Academy DeepDive into using the Eigen C++ Library to perform **Tensor** calculations.

## What is Eigen::Tensor?

Eigen is a C++ template library for linear algebra covering matrices, vectors, numerical solvers, and related algorithms. We focus in this course on a significant extension of Eigen (the Tensor module) that extends Eigen's functionality in handling *higher-dimensional numerical objects* (tensors of three and higher dimensions).

![Tensor Image](tensor.jpeg)

## Motivation for the Course

Eigen (and in particular its Tensor module) is a building block used by major open source computational libraries and frameworks such a Tensorflow and Stan. Such libraries frequently require tensor type containers (higher-dimensional than vectors and matrices). Familiarity with the Eigen::Tensor API enables developers with similar requirements to write concise, high-level C++ code that is performant on a variety of devices.  

![TensorFlow Image](tensorflow-example.jpg)

## Course Objectives

The objective of the course is to provide an introduction to using Eigen::Tensor as a high-level library for using Tensors in C++ projects.

* We learn the concept and techniques of the Eigen Tensor class 
* How to declare, initialize Tensors of various ranks and types and how to access Tensor elements
* Elementary unary and binary operations involving Tensors
* More complex operations (reductions, contractions)
* Modifying the shape of Tensors

The course is live at the [Open Risk Academy](https://www.openriskacademy.com), this repository
hosts C++ scripts used in the course.

## Pre-requisites 

Basic knowledge and a working setup for C++ development (e.g., being able to add Eigen as a header only library) is required. 

Mathematical notation is used liberally throughout the course to clarify (for those familiar with it) the tensor manipulation concepts but is not strictly required for benefiting from the course.

## Summary of Contents

The course comprises 14 Steps covering the following topics

* Step 1. Getting started with Eigen
* Step 2. Tensor Class Declarations
* Step 3. Tensor Class Initializations
* Step 4. Working with Tensor Elements, I
* Step 5. Working with Tensor Elements, II
* Step 6. Random Number Initialization
* Step 7. Unary Element-Wise Operations
* Step 8. Binary Element-Wise Operations
* Step 9. In-Memory Representations of Tensors
* Step 10. Tensor Contraction Operations
* Step 11. Tensor Reduction Operations
* Step 12. Tensor Shape Modifying Operations
* Step 13. Tensor Scanning Operations
* Step 14. Review and Outlook


## Course Exercises

The exercises concern writing C++ small snippets of code that accomplish a certain task. The form of each exercise is as a Catch2 test. Indicative solutions are provided in this repository.

