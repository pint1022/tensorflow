/* Copyright 2015 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include "tensorflow/core/kernels/cwise_ops_common.h"
#include "tensorflow/core/kernels/cwise_ops_gradients.h"

namespace tensorflow {
REGISTER2(BinaryOp, CPU, "Igamma", functor::igamma, float, double);
REGISTER2(BinaryOp, CPU, "IgammaGradA", functor::igamma_grad_a, float, double);
REGISTER2(BinaryOp, CPU, "Igammac", functor::igammac, float, double);
#if GOOGLE_CUDA
REGISTER(BinaryOp, GPU, "Igamma", functor::igamma, float);
REGISTER(BinaryOp, GPU, "IgammaGradA", functor::igamma_grad_a, float);
REGISTER(BinaryOp, GPU, "Igammac", functor::igammac, float);
#endif
}  // namespace tensorflow
