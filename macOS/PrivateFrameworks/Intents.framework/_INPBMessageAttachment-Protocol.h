//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBString, _INPBURLValue;

@protocol _INPBMessageAttachment <NSObject>
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type;
@property(readonly, nonatomic) BOOL hasFilename;
@property(retain, nonatomic) _INPBString *filename;
@property(readonly, nonatomic) BOOL hasFileURL;
@property(retain, nonatomic) _INPBURLValue *fileURL;
- (int)StringAsType:(NSString *)arg1;
- (NSString *)typeAsString:(int)arg1;
@end

