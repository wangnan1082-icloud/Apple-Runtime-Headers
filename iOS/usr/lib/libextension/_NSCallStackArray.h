//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSArray.h"

__attribute__((visibility("hidden")))
@interface _NSCallStackArray : NSArray
{
    void **_frames;
    unsigned long long _cnt;
    unsigned long long _ignore;
    char **_pcstrs;
    _Bool _wantSyms;
}

+ (id)arrayWithFrames:(void **)arg1 count:(unsigned long long)arg2 symbols:(_Bool)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)dealloc;

@end
