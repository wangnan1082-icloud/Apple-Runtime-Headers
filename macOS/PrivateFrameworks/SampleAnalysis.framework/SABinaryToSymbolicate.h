//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SABinary;

__attribute__((visibility("hidden")))
@interface SABinaryToSymbolicate : NSObject
{
    int _livePid;
    SABinary *_binary;
    unsigned long long _dataGatheringOptions;
}

+ (id)binaryToSymbolicateWithBinary:(id)arg1;
@property int livePid; // @synthesize livePid=_livePid;
@property unsigned long long dataGatheringOptions; // @synthesize dataGatheringOptions=_dataGatheringOptions;
@property(readonly) SABinary *binary; // @synthesize binary=_binary;
- (void).cxx_destruct;

@end
