//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>

@interface NSDocInfo : NSObject <NSCopying>
{
    long time;
    unsigned short mode;
    struct {
        unsigned int isDir:1;
        unsigned int isSingleFile:1;
        unsigned int isSoftLink:1;
        unsigned int _pad:13;
    } flags;
}

- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFileAttributes:(id)arg1;
- (id)initFromInfo:(struct stat *)arg1;

@end

