//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SAFrame;

__attribute__((visibility("hidden")))
@interface SAPAStyleFrame : NSObject
{
    SAFrame *_frame;
}

+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const CDStruct_1a4856f2 *)arg1 bufferLength:(unsigned long long)arg2;
+ (id)classDictionaryKey;
@property(retain) SAFrame *frame; // @synthesize frame=_frame;
- (void).cxx_destruct;
- (void)populateReferencesUsingBuffer:(const CDStruct_1a4856f2 *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary *)arg3 andDataBufferDictionary:(struct NSMutableDictionary *)arg4;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (BOOL)addSelfToBuffer:(void *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg3;

@end
