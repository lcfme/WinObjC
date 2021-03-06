//******************************************************************************
//
// Copyright (c) 2015 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************

#ifndef COREFOUNDATION_IMPEXP
#define COREFOUNDATION_IMPEXP __declspec(dllimport)
#endif

#ifndef COREFOUNDATION_EXPORT
#ifdef __cplusplus
#define COREFOUNDATION_EXPORT COREFOUNDATION_IMPEXP extern "C"
#define COREFOUNDATION_EXPORT_CLASS COREFOUNDATION_IMPEXP
#else
#define COREFOUNDATION_EXPORT COREFOUNDATION_IMPEXP extern
#define COREFOUNDATION_EXPORT_CLASS COREFOUNDATION_IMPEXP
#endif
#endif

#ifndef COREFOUNDATION_EXTERNC_BEGIN
#if defined(__cplusplus)
#define COREFOUNDATION_EXTERNC_BEGIN extern "C" {
#define COREFOUNDATION_EXTERNC_END }
#else
#define COREFOUNDATION_EXTERNC_BEGIN
#define COREFOUNDATION_EXTERNC_END
#endif
#endif
