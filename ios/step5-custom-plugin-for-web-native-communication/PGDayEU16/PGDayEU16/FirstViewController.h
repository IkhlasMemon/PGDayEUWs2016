//
//  FirstViewController.h
//  PGDayEU16
//
//  Created by Eddy Verbruggen on 12/05/16.
//  Copyright © 2016 Eddy Verbruggen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FirstViewController : UIViewController<UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, strong) NSMutableArray * items;
@property (nonatomic, strong) UITextField * textField;
@property (nonatomic, strong) UITableView * tableView;

@end
