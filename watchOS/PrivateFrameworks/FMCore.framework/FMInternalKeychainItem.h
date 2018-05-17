//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FMKeychainItem.h"

@class NSData, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface FMInternalKeychainItem : NSObject <FMKeychainItem>
{
    NSString *_password;
    NSDate *_lastModifyDate;
    NSDate *_creationDate;
    NSData *_rawData;
}

@property(retain, nonatomic) NSData *rawData; // @synthesize rawData=_rawData;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSDate *lastModifyDate; // @synthesize lastModifyDate=_lastModifyDate;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
- (void).cxx_destruct;
- (id)initWithResults:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
