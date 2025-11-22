#!/bin/bash

# @file gcc_test.sh
# @author Chimipupu(https://github.com/Chimipupu)
# @brief GCC test build and run script for Raspberry Pi Zero 2 W
# @version 0.1
# @date 2025-11-23
#
# @copyright Copyright (c) 2025 Chimipupu All Rights Reserved.
#

set -e

# Source code directory
SRC_DIR="../test/gcc_test"
OUTPUT_NAME="gcc_test"

echo "Building gcc_test..."
gcc -o "${OUTPUT_NAME}" "${SRC_DIR}/gcc_test.c"
echo "Build completed successfully."

echo "Running gcc_test..."
./"${OUTPUT_NAME}"
echo "Execution completed."