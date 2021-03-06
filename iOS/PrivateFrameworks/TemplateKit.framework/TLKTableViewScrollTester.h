//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UITableView;

@interface TLKTableViewScrollTester : NSObject
{
    _Bool _directionUp;
    _Bool _finishedFirstScroll;
    double _scrollTime;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _firstScroll;
    UITableView *_tableView;
    double _startTime;
}

@property(nonatomic) _Bool finishedFirstScroll; // @synthesize finishedFirstScroll=_finishedFirstScroll;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool directionUp; // @synthesize directionUp=_directionUp;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType firstScroll; // @synthesize firstScroll=_firstScroll;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) double scrollTime; // @synthesize scrollTime=_scrollTime;
- (void).cxx_destruct;
- (void)fire:(id)arg1;
- (void)performScrollTestOnTableView:(id)arg1 firstScroll:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performScrollTestOnTableView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

