//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPSCNNConvolutionDataSource.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface EspressoConvolutionWeightsForMPS : NSObject <MPSCNNConvolutionDataSource>
{
    unsigned int _data_type;
    id <MTLDevice> _dev;
    float *_scale_factor_batch_norm;
    // Error parsing type: ^, name: _quantization_ranges
    shared_ptr_227e5c42 _quantized_weights_blob;
    shared_ptr_acd4b298 _weights_blob;
    shared_ptr_2bf4edc4 _weights_f16_blob;
    shared_ptr_0954c506 _biases_blob;
    struct convolution_uniforms _params;
}

@property(nonatomic) shared_ptr_0954c506 biases_blob; // @synthesize biases_blob=_biases_blob;
@property(nonatomic) shared_ptr_2bf4edc4 weights_f16_blob; // @synthesize weights_f16_blob=_weights_f16_blob;
@property(nonatomic) shared_ptr_acd4b298 weights_blob; // @synthesize weights_blob=_weights_blob;
@property(nonatomic) shared_ptr_227e5c42 quantized_weights_blob; // @synthesize quantized_weights_blob=_quantized_weights_blob;
// Error parsing type for property quantization_ranges:
// Property attributes: T^,N,V_quantization_ranges

@property(nonatomic) float *scale_factor_batch_norm; // @synthesize scale_factor_batch_norm=_scale_factor_batch_norm;
@property unsigned int data_type; // @synthesize data_type=_data_type;
@property(retain) id <MTLDevice> dev; // @synthesize dev=_dev;
@property struct convolution_uniforms params; // @synthesize params=_params;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)label;
- (BOOL)ready;
-     // Error parsing type: ^16@0:8, name: rangesForUInt8Kernel
- (void)purge;
- (float *)biasTerms;
- (void *)weights;
- (BOOL)load;
- (id)descriptor;
- (unsigned int)dataType;
- (id)initWithDevice:(id)arg1 params:(struct convolution_uniforms)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
