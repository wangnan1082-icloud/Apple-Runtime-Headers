//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/MTLFunctionSPI-Protocol.h>

@class MTLType, NSArray, NSDictionary, NSString;
@protocol MTLDevice, OS_dispatch_data;

@interface _MTLFunction : NSObject <MTLFunctionSPI>
{
    id <MTLDevice> _device;
    unsigned int _functionType;
    NSString *_name;
    struct MTLLibraryData *_libraryData;
    id _vendorPrivate;
    NSArray *_vertexAttributes;
    NSArray *_functionConstants;
    NSDictionary *_functionConstantDictionary;
    NSString *_label;
    MTLType *_returnType;
    NSArray *_arguments;
    NSString *_unpackedFilePath;
}

@property(copy) NSString *label; // @synthesize label=_label;
@property(copy) NSString *unpackedFilePath; // @synthesize unpackedFilePath=_unpackedFilePath;
@property(readonly) id vendorPrivate; // @synthesize vendorPrivate=_vendorPrivate;
@property(readonly) struct MTLLibraryData *libraryData; // @synthesize libraryData=_libraryData;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) unsigned int functionType; // @synthesize functionType=_functionType;
@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
- (id)bitcodeData;
- (id)newIndirectArgumentEncoderWithBufferIndex:(unsigned int)arg1 reflection:(id *)arg2;
- (id)newIndirectArgumentEncoderWithBufferIndex:(unsigned int)arg1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned int)arg1 reflection:(id *)arg2;
- (id)newArgumentEncoderWithBufferIndex:(unsigned int)arg1;
- (void)reflectionWithOptions:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)reflectionWithOptions:(unsigned int)arg1;
- (id)newSerializedVertexDataWithVertexDescriptor:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)formattedDescription:(unsigned int)arg1;
@property(readonly) NSDictionary *functionConstantsDictionary;
- (void)dealloc;
- (unsigned long long)bitCodeFileSize;
- (const CDStruct_41a22ec7 *)bitCodeHash;
- (void)setVendorPrivate:(id)arg1;
- (id)initWithName:(id)arg1 type:(unsigned int)arg2 libraryData:(struct MTLLibraryData *)arg3 device:(id)arg4;

// Remaining properties
@property NSArray *arguments; // @dynamic arguments;
@property(readonly) unsigned long long bitCodeOffset; // @dynamic bitCodeOffset;
@property(readonly) unsigned char bitcodeType; // @dynamic bitcodeType;
@property(readonly, copy) NSString *debugDescription;
@property(copy) NSString *filePath; // @dynamic filePath;
@property NSArray *functionConstants; // @dynamic functionConstants;
@property(readonly) NSObject<OS_dispatch_data> *functionInputs; // @dynamic functionInputs;
@property(readonly) unsigned int hash;
@property int lineNumber; // @dynamic lineNumber;
@property(readonly) _Bool needsFunctionConstantValues; // @dynamic needsFunctionConstantValues;
@property(readonly) int patchControlPointCount; // @dynamic patchControlPointCount;
@property(readonly) unsigned int patchType; // @dynamic patchType;
@property(readonly) unsigned int renderTargetArrayIndexType; // @dynamic renderTargetArrayIndexType;
@property MTLType *returnType; // @dynamic returnType;
@property(readonly) NSArray *stageInputAttributes; // @dynamic stageInputAttributes;
@property(readonly) Class superclass;
@property NSArray *vertexAttributes; // @dynamic vertexAttributes;

@end

