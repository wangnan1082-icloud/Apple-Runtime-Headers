//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class RPPerson;

@protocol RPPeopleXPCClientInterface

@optional
- (void)xpcPersonChanged:(RPPerson *)arg1 changes:(unsigned int)arg2;
- (void)xpcPersonLost:(RPPerson *)arg1;
- (void)xpcPersonFound:(RPPerson *)arg1;
@end
