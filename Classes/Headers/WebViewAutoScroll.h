// Created by Allan Odgaard.
// Converted to ARC Support on Thursday, June 07, 2012

@interface WebViewAutoScroll : NSObject
@property (assign) NSRect lastFrame;
@property (assign) NSRect lastVisibleRect;
@property (nonatomic, weak) WebFrameView *webFrame;
@end