#!/bin/bash


touch ./b/one ./b/two ./b/three ./b/four ./b/goner

touch ./a/one ./a/two ./a/three ./a/four ./a/okay

echo "Hello from file one" >> ./b/one

echo "Hello from file two" >> ./b/two

echo "Hello from file three" >> ./b/three

echo "Hello from file four" >> ./b/four

echo "Done!"
