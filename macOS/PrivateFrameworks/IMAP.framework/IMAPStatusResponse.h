//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPResponse.h>

@class NSDictionary, NSString;

@interface IMAPStatusResponse : IMAPResponse
{
    NSString *_mailboxName;
    NSDictionary *_statusEntries;
}

+ (BOOL)handlesResponseWithName:(const char *)arg1 ofLength:(unsigned long long)arg2;
@property(copy, nonatomic) NSDictionary *statusEntries; // @synthesize statusEntries=_statusEntries;
@property(copy, nonatomic) NSString *mailboxName; // @synthesize mailboxName=_mailboxName;
- (void).cxx_destruct;
- (id)description;

@end
