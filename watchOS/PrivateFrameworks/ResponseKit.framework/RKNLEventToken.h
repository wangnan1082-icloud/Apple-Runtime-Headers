//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface RKNLEventToken : NSObject
{
    NSString *_string;
    unsigned int _tokenID;
    long _location;
    long _length;
}

@property long length; // @synthesize length=_length;
@property long location; // @synthesize location=_location;
@property unsigned int tokenID; // @synthesize tokenID=_tokenID;
@property(retain) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (id)initWithString:(id)arg1 location:(long)arg2 length:(long)arg3;

@end
