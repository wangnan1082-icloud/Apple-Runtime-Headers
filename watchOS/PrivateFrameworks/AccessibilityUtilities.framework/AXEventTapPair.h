//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AXEventTapPair : NSObject
{
    CDUnknownBlockType handler;
    NSString *identifier;
    int priority;
    int _type;
    struct __IOHIDEventSystemClient *_systemClient;
    CDUnknownBlockType _matchingServiceHandler;
}

@property(copy, nonatomic) CDUnknownBlockType matchingServiceHandler; // @synthesize matchingServiceHandler=_matchingServiceHandler;
@property(retain, nonatomic) struct __IOHIDEventSystemClient *systemClient; // @synthesize systemClient=_systemClient;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int priority; // @synthesize priority;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;

@end
