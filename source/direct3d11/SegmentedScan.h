/*
* Copyright (c) 2007-2010 SlimDX Group
* 
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
* 
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
* 
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*/
#pragma once

#include "../ComObject.h"

#include "../dxgi/Enums.h"

#include "../ComObject.h"

#include "Enums11.h"

namespace SlimDX
{
	namespace Direct3D11
	{
		ref class DeviceContext;
		ref class UnorderedAccessView;

		/// <summary>
		/// A segmented scan context.
		/// </summary>
		/// <unmanaged>ID3DX11SegmentedScan</unmanaged>
		public ref class SegmentedScan : public ComObject 
		{
			COMOBJECT(ID3DX11SegmentedScan, SegmentedScan);

		protected:
			SegmentedScan() { }
			
		public:

			SegmentedScan( DeviceContext^ deviceContext, int maxElementScanSize );

			/// <summary>
			/// Sets the scan direction.
			/// </summary>
			property ScanDirection Direction
			{
				void set( ScanDirection value );
			}

			void PerformSegmentedScan( ScanDataType elementType, ScanOpCode operation, int numberOfElements, UnorderedAccessView^ src, UnorderedAccessView^ srcElementFlags, UnorderedAccessView^ dest );
		};
	}
};