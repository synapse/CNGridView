//
//  CNAppDelegate.h
//  CNGridView Example
//
//  Created by cocoa:naut on 12.10.12.
//  Copyright (c) 2012 cocoa:naut. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "CNGridView.h"

@interface CNAppDelegate : NSObject <NSApplicationDelegate, CNGridViewDataSource, CNGridViewDelegate>

@property (assign) IBOutlet NSWindow *window;
@property (strong) IBOutlet CNGridView *gridView;
@property (strong) IBOutlet NSSlider *itemSizeSlider;
@property (strong) IBOutlet NSButton *allowMultipleSelectionCheckbox;
@property (strong) NSMutableArray *items;

- (IBAction)itemSizeSliderAction:(id)sender;
- (IBAction)allowMultipleSelectionCheckboxAction:(id)sender;
- (IBAction)deleteButtonAction:(id)sender;
- (IBAction)selectAllItemsButtonAction:(id)sender;
@end
