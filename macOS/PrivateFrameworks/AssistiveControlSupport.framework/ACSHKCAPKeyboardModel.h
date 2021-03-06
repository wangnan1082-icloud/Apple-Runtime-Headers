//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface ACSHKCAPKeyboardModel : NSObject
{
    NSMutableArray *_keys;
    double _minX;
    double _minY;
    double _totalKeyWidth;
    double _totalKeyHeight;
    NSMutableDictionary *_keyMapping;
    struct CGSize _size;
}

@property(retain) NSMutableDictionary *keyMapping; // @synthesize keyMapping=_keyMapping;
@property(nonatomic) double totalKeyHeight; // @synthesize totalKeyHeight=_totalKeyHeight;
@property(nonatomic) double totalKeyWidth; // @synthesize totalKeyWidth=_totalKeyWidth;
@property(nonatomic) double minY; // @synthesize minY=_minY;
@property(nonatomic) double minX; // @synthesize minX=_minX;
@property(retain) NSMutableArray *keys; // @synthesize keys=_keys;
@property(readonly) struct CGSize size; // @synthesize size=_size;
- (void).cxx_destruct;
- (id)description;
- (void)addKey:(id)arg1;
- (id)init;
- (id)_keyForCode:(short)arg1;

@end

